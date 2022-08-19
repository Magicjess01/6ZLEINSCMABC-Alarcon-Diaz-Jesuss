#include <iostream>


using namespace std;
int main(){

//crear una estructura de pacientes
struct Paciente
{
int CodPaciente;// es el DNI
char NomPaciente[60];
char Genero;
int Edad;
float Talla;
float Peso;
};
Paciente pacientes[60];
int cant_pacientes=0;
void datos_paciente();
int ingresar_cod_paciente();
void lista_pacientes();
void lista_paciente_posicion(int main(pos_paciente);
void lista_paciente();
void IMC();
void regresar_menu();
void menu();
void datos_paciente()
{
system("cls");
cout<<"\t\tDatos de Paciente"<<endl;
cout<<"Ingrese DNI:";
cin>>pacientes[cant_pacientes].CodPaciente;
cout<<"Ingrese nombre de paciente: ";
cin>>pacientes[cant_pacientes].NomPaciente;
cout<<"Ingrese genero(M/F): ";
cin>>pacientes[cant_pacientes].Genero;
cout<<"Ingrese edad: ";
cin>>pacientes[cant_pacientes].Edad;
cout<<"Ingrese talla: ";
cin>>pacientes[cant_pacientes].Talla;
cout<<"Ingrese peso: ";
cin>>pacientes[cant_pacientes].Peso;
cant_pacientes++;
regresar_menu();
}
int ingresar_cod_paciente()
{
int aux;
int respuesta=-1;
bool encontrado=false;
system("cls");
cout<<"Ingresar codigo de paciente: ";
cin>>aux;
for(int i=0;i<cant_pacientes;i++)
{
if(aux==pacientes[i].CodPaciente)
{
respuesta=i;
encontrado=true;
}
}
if(encontrado==false)
{
cout<<"No encontrado\n";
regresar_menu;
}
return respuesta;
}
void lista_paciente()
{
system("cls");
int pos_paciente=ingresar_cod_paciente();
if(pos_paciente==-1)
regresar_menu();
cout<<"\t\tDatos de Paciente"<<endl;
cout<<"DNI: "<<pacientes[pos_paciente].CodPaciente<<endl;
cout<<"Nombre: "<<pacientes[pos_paciente].NomPaciente<<endl;
if(pacientes[pos_paciente].Genero=='M')
cout<<"Genero: Masculino"<<endl;
else
cout<<"Genero: Femenino"<<endl;
cout<<"Edad: "<<pacientes[pos_paciente].Edad<<endl;
cout<<"Talla: "<<pacientes[pos_paciente].Talla<<endl;
cout<<"Peso: "<<pacientes[pos_paciente].Peso<<endl;
regresar_menu();
}
void lista_paciente_posicion(int pos_paciente)
{
cout<<"\t\tDatos de Paciente "<<pos_paciente+1<<endl;
cout<<"DNI: "<<pacientes[pos_paciente].CodPaciente<<endl;
cout<<"Nombre: "<<pacientes[pos_paciente].NomPaciente<<endl;
if(pacientes[pos_paciente].Genero=='M')
cout<<"Genero: Masculino"<<endl;
else
cout<<"Genero: Femenino"<<endl;
cout<<"Edad: "<<pacientes[pos_paciente].Edad<<endl;
cout<<"Talla: "<<pacientes[pos_paciente].Talla<<endl;
cout<<"Peso: "<<pacientes[pos_paciente].Peso<<endl;
cout<<endl<<endl;
}
void lista_pacientes()
{
system("cls");
cout<<"\t\tLista de pacientes\n";
for(int i=0;i<cant_pacientes;i++)
{
lista_paciente_posicion(i);
}
regresar_menu();
}
void regresar_menu()
{
char op;
do
{
cout<<"Desea regresar a menu? (S/N) : ";
cin>>op;
}while(op!='S' && op!='N');
if(op=='S')
menu();
else
system("pause");
}

void IMC()
{
    float IMC, altura_en_m, peso_en_kg;
    cout << "Ingresa el valor de altura en m: ";
    cin >> altura_en_m;
    cin.get();
    cout << "Ingresa el valor de peso en kg: ";
    cin >> peso_en_kg;
    cin.get();
    IMC=peso_en_kg/altura_en_m/altura_en_m;
    if(IMC<16)
        cout << "Criterio de ingreso en hospital." << endl;
    if(IMC>=16&&IMC<17)
        cout << "Infrapeso." << endl;
    if(IMC>=17&&IMC<18)
        cout << "Bajo peso." << endl;
    if(IMC>=18&&IMC<25)
        cout << "Peso normal (saludable)." << endl;
    if(IMC>=5&&IMC<30)
        cout << "Sobrepeso (obesidad de grado I)." << endl;
    if(IMC>=30&&IMC<35)
        cout << "Sobrepeso cr\242nico (obesidad de grado II)." << endl;
    if(IMC>=35&&IMC<40)
        cout << "Obesidad prem\242rbida (obesidad de grado III)." << endl;
    if(IMC>=40)
        cout << "Obesidad m\242rbida (obesidad de grado IV)." << endl;
    cout << "Valor de IMC: " << IMC << endl;
    cout << endl;
    system ("pause");
}


void menu()
{
int opcion=0;
do{
system("cls");
cout<<"\tClinica\n";
cout<<"1. Ingresar Datos de Paciente"<<endl;
cout<<"2. Lista de Pacientes"<<endl;
cout<<"3. Ver Datos de Paciente"<<endl;
cout<<"4. IMC"<<endl;
cout<<"Ingrese opcion: ";
cin>>opcion;
}while(opcion>4);
switch (opcion)
{
case 1: datos_paciente();break;
case 2: lista_pacientes();break;
case 3: lista_paciente();break;
case 4: IMC();break;

}
}
}
