#include "Persona.h"
#include <string>
#include <sstream>
using namespace std;
Persona::Persona(){

}
Persona::Persona(string nombre,string usuario,int edad,string id,string fecha_nac){
	this->nombre=nombre;
	this->usuario=usuario;
	this->edad=edad;
	this->id=id;
	this->fecha_nac=fecha_nac;
}
Persona::~Persona(){
	
}
string Persona::toString() const{
	stringstream ss;
	ss<<"Nombre: "<<nombre<<"\nUsuario: "<<"\nEdad: "<<edad<<"\nId: "<<id<<"\nFecha de nacimiento: "<<fecha_nac;
	return ss.str();
}
void Persona::setNombre(string nombre){
	this->nombre=nombre;
}
void Persona::setUsuario(string usuario){
	this->usuario=usuario;
}
void Persona::setEdad(int edad){
	this->edad=edad;
}
void Persona::setId(string Id){
	this->id=id;
}
void Persona::setFecha_nac(string fecha_nac){
	this->fecha_nac=fecha_nac;
}