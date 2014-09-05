#include "PersonalAdministrativo.h"
#include <string>
#include <sstream>
using namespace std;
PersonalAdministrativo::PersonalAdministrativo(){

}
PersonalAdministrativo::PersonalAdministrativo(string nombre,string usuario,int edad,string id,string fecha_nac,string claveIngreso,string puesto):Persona(nombre,usuario,edad,id,fecha_nac),claveIngreso(claveIngreso),puesto(puesto){

}
PersonalAdministrativo::setClaveIngreso(string claveIngreso){
	this->claveIngreso=claveIngreso;
}
PersonalAdministrativo::setPuesto(string puesto){
	this->puesto=puesto;
}
string PersonalAdministrativo::toString() const{
	stringstream ss;
	ss<<"Nombre: "<<nombre<<"\nUsuario: "<<usuario<<"\nEdad: "<<edad<<"\nId: "<<id<<"\nFecha de Nacimiento: "<<fecha_nac
	  <<"\nClave de ingreso: "<<claveIngreso<<"\nPuesto: "<<puesto;

}