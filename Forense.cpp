#include "Forense.h"
#include "Persona.h"
#include <string>
#include <sstream>
using namespace std;
Forense::Forense(string nombre,string usuario,int edad,string id,string fecha_nac,string fecha_ingreso,string horario):Persona(nombre,usuario,edad,id,fecha_nac){
	this->fecha_ingreso=nombre;
	this->horario=horario;
}
Forense::Forense():Persona(){
	
}
void Forense::setFecha_ingreso(string fecha_ingreso){
	this->fecha_ingreso=fecha_ingreso;
}
void Forense::setHorario(string horario){
	this->horario=horario;
}