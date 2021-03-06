#include "PersonalAdministrativo.h"
#include "Persona.h"
#include <string>
#include <sstream>
using namespace std;
PersonalAdministrativo::PersonalAdministrativo(){

}
PersonalAdministrativo::PersonalAdministrativo(string nombre,string usuario,int edad,string id,string fecha_nac,string claveIngreso,string puesto):Persona(nombre,usuario,edad,id,fecha_nac),claveIngreso(claveIngreso),puesto(puesto){
	this-> claveIngreso = claveIngreso;
	this-> puesto = puesto;
}
PersonalAdministrativo::~PersonalAdministrativo(){
	
}
void PersonalAdministrativo::setClaveIngreso(string claveIngreso){
	this->claveIngreso=claveIngreso;
}
void PersonalAdministrativo::setPuesto(string puesto){
	this->puesto=puesto;
}
string PersonalAdministrativo::toString() const{
	stringstream ss;
	ss<<"Clave de ingreso: "<<claveIngreso<<"\nPuesto: "<<puesto;
	return ss.str();
}