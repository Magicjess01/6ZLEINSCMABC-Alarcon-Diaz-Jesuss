#include<iostream.h>
#include<conio.h>
void main()
{int n,i,x[100],salto,tem,band;
char s;
do{
clrscr();
cout<<"defina la cantidad de elementos:";cin>>n;
for(i=0;i<n;i++)
{cout<<"elemento["<<i<<"]:";cin>>x[i];}
for(salto=n/2;salto>0;salto=salto/2)
do{band=0;
for(i=0;i<n-salto;i++)
if(x[i]>x[i+salto])
{tem=x[i];x[i]=x[i+salto];x[i+salto]=tem; band=1;}
}while(band=0);
for(i=0;i<n;i++)
cout<<x[i]<<" ";
cout<<endl;
cout<<"desea continuar[s/n]:";cin>>s;
}while(s=='s');
getch();
}
