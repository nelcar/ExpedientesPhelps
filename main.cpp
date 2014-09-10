//JOSE ALBERTO PEJUAN
//NELSON JESUS CARDENAS
//OSCAR GABRIEL ORDOÑES
#include "Caso.h"
#include "Evidencias.h"
#include "Homicidio.h"
#include "Persona.h"
#include "Secuestro.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int menu(int);
void agregarPersona();
void agregarEvidencia();
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
	cout << "Nombre Real: ";
	cin >> nombreReal;
	cout << endl << "Nombre de Usuario: ";
	cin >> nombreUsuario;
	cout << endl << "Contraseña: ";
	cin >> contrasena;
	cout << endl << "Edad: ";
	cin >> edad;
	cout << endl << "Identidad: ";
	cin >> identidad;
	cout << endl << "Fecha de Nacimiento: ";
	cin >> fechaNacimiento;

	int opcion;
	opcion = menu(5);

}
void agregarEvidencia(){
	cout << endl << "***********************************************************" << endl;
	
}