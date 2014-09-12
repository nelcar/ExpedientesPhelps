//JOSE ALBERTO PEJUAN
//NELSON JESUS CARDENAS
//OSCAR GABRIEL ORDOÑES
#include "Caso.h"
#include "Evidencias.h"
#include "Homicidio.h"
#include "Persona.h"
#include "Secuestro.h"
#include "Investigadores.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;
vector<Evidencias> listaevidencias;
vector<Persona> listapersonas;
vector<Caso> listacasos;
int menu(int);
void agregarPersona();
void agregarEvidencia();
void agregarCaso();
int main (int argc, char** argv){
	int opcion;// opcion del menu
	do{ // menu
		opcion = menu(1);
		if (opcion == 1){ //Agregar
			do{ //menu agregar
				opcion = menu(2);
				if(opcion == 1){ // agregar Persona
					agregarPersona();
				}
				if(opcion == 2){ //agregar Evidencia
					agregarEvidencia();
				}
				if(opcion == 3){ //agregar Caso

				}
			}while(opcion != 4);
		}
		if(opcion == 2){ //Modificar
			do{ //menu Modificar
				opcion = menu(3);
				if(opcion == 1){ // modificar Persona

				}
				if(opcion == 2){ // modificar Evidencia

				}
				if(opcion == 3){ // modificar Caso

				}
			}while(opcion != 4);
		}
		if(opcion == 3){ // eliminar
			do{ //menu Eliminar
				opcion = menu(4);
				if(opcion == 1){ // modificar Persona

				}
				if(opcion == 2){ // modificar Evidencia

				}
				if(opcion == 3){ // modificar Caso

				}
			}while(opcion != 4);
		}
	}while (opcion != 4);
	return 0;
}

int menu(int opcion){ // menu
	int res = 0;
	if (opcion == 1){ // menu principal
		cout << "---------------Expedientes PHELPS---------------" << endl << "1. Agregar" << endl << "2. Modificar" << endl << "3. Eliminar"
			 << endl << "4. Salir" << endl <<"Ingrese su opcion: ";
		cin >> res;
		cout << endl;
		return res;
	}
	if (opcion == 2){ // menu Agregar
		cout << "--------------------AGREGAR--------------------" << endl << "1. Persona" << endl << "2. Evidencias" << endl << "3. Casos" 
			 << endl << "4. Salir" << endl << "Ingrese su opcion: ";
		cin >> res;
		cout << endl;
		return res;
	}
	if (opcion == 3){ // menu Modificar
		cout << "-------------------MODIFICAR-------------------" << endl << "1. Persona" << endl << "2. Evidencias" << endl << "3. Casos" 
			 << endl << "4. Salir" << endl << "Ingrese su opcion: ";
		cin >> res;
		cout << endl;
		return res;
	}
	if (opcion == 4){ // menu Eliminar
		cout << "--------------------ELIMINAR--------------------" << endl << "1. Persona" << endl << "2. Evidencias" << endl << "3. Casos" 
			 << endl << "4. Salir" << endl << "Ingrese su opcion: ";
		cin >> res;
		cout << endl;
		return res;
	}
	if (opcion == 5){ // menu agregar persona
		cout << "----------------TIPO DE PERSONA----------------" << endl << "1. Personal Administrativo" << endl << "2. Investigador" 
			 << endl << "3. Forense" << endl << "Ingrese su opcion: ";
		cin >> res;
		cout << endl;
		return res;	
	}
	if (opcion == 6){ // menu agregar caso
		cout << "-----------------TIPO DE CASO-----------------" << endl << "1. Homicidio: " << endl << "Secuestro: "<< endl << "Ingrese su opcion: ";
		cin >> res;
		cout << endl;
		return res;
	}
	return res;
}
void agregarPersona(){
	string nombreReal;
	string nombreUsuario;
	string contrasena;
	int edad;
	string identidad;
	string fechaNacimiento;

	cout << endl << "***********************************************************" << endl;
	cout << "Nombre real: ";
	getline(cin,nombreReal);
	cout << endl << "Nombre de usuario: ";
	getline(cin,nombreUsuario);
	cout << endl << "Contraseña: ";
	getline(cin,contrasena);
	cout << endl << "Edad: ";
	getline(cin,edad);
	cout << endl << "Identidad: ";
	getline(cin,identidad);
	cout << endl << "Fecha de nacimiento: ";
	getline(cin,fechaNacimiento);

	int opcion;
	opcion = menu(5);
	if(opcion == 1){
		PersonalAdministrativo
	}
	if(opcion == 2){

	}
	if(opcion == 3){

	}
}
void agregarEvidencia(){
	string nombre;
	string tipoObjeto;
	string lugar;
	string huellas;
	string procesada;
	Evidencias objevidencia;
	cout << endl << "***********************************************************" << endl;
	cout << "Nombre: ";
	getline(cin,nombre);
	cout << endl << "Tipo de objeto: ";
	getline(cin,tipoObjeto);
	cout << endl << "Lugar donde fue encontrada: ";
	getline(cin,lugar);
	cout << endl << "Tenía huellas: ";
	getline(cin,huellas);
	cout << endl << "Fue procesada: ";
	getline(cin,procesada);
	objevidencia.setNombre(nombre);
	objevidencia.setTipoObjeto(tipoObjeto);
	objevidencia.setlugar(lugar);
	objevidencia.setHuellas(huellas);
	objevidencia.setProcesada(procesada);
	listaevidencias.push_back(objevidencia);
}
void agregarCaso(){
	int numero_caso;
	vector<Investigadores> investigadores;

	for(int i=0;i<listapersonas.size();i++){
	}

	vector<Evidencias> evidencia;
	for (int i = 0; i < listaevidencias.size(); i++)
	{
	}
	string hora;
	string fecha;
	bool completado;
	char temp;
	char resp;

	cout << endl << "***********************************************************" << endl;
	cout << "Número de caso: ";
	cin >> numero_caso;
	cout << endl << "Lista de investigadores: ";
	//falta agregar los investigadores
	for(int i=0;i<listapersonas.size();i++){
		if (listapersonas[i] typeof Investigadores)
		{
			cout<<"Indice:"<<i<<"\t"<<listapersonas[i].toString();
		}
	}
	int numerotrabajodores;
	int numeroevidencias;
	cout<<"Ingrese numero de investigadores trabajando:";
	cin>>numerotrabajodores;
	int ind;
	for (int i = 0; i < numerotrabajodores; i++)
	{
		cout<<"Indice del investigador numero "<<i<<":";
		cin>>ind;
		investigadores.push_back(listapersonas[ind]);
	}
	cout << endl << "Lista de evidencias: ";
	//falta agregar las evidencias
	cout<<"Ingrese numero de evidencias:";
	cin>>numeroevidencias;
	
	for (int i = 0; i < numeroevidencias; i++)
	{
		cout<<"Indice de la evidencia numero "<<i<<":";
		cin>>ind;
		evidencia.push_back(listaevidencias[ind]);
	}

	cout << endl << "Hora: ";
	getline(cin,hora);
	cout << endl << "Fecha: ";
	getline(cin,fecha);
	cout << endl << "Caso está cerrado [S/N]: ";
	cin >> temp;
	if (temp == 'S' || temp == 's'){
		completado = true;
	} else {
		completado = false;
	}
	Caso objcaso;
	objcaso.setNumeroCaso(numero_caso);
	objcaso.setEvidencia(evidencia);
	objcaso.setHora(hora);
	objcaso.setFecha(fecha);
	objcaso.setCompletado(temp);
	listacasos.push_back(objcaso);
	cout << endl;
}