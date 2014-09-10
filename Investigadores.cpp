#include "Investigadores.h"
#include "Persona.h"
#include <string>
#include <sstream>
using namespace std;
Investigadores::Investigadores(string nombre,string usuario,int edad,string id,string fecha_nac,int casos,int casosCerrados,int casosSinResolver):Persona(nombre,usuario,edad,id,fecha_nac){
	this->casos=casos;
	this->casosCerrados=casosCerrados;
	this->casosSinResolver=casosSinResolver;
}
Investigadores::Investigadores(){
	
}
Investigadores::~Investigadores(){

}
void Investigadores::setCasos(int casos){
	this->casos=casos;
}
void Investigadores::setCasosCerrados(int casosCerrados){
	this->casosCerrados=casosCerrados;
}
void Investigadores::setCasosSinResolver(int casosSinResolver){
	this->casosSinResolver=casosSinResolver;
}
string Investigadores::toString() const{
	stringstream ss;
	ss<<"Casos atendidos: "<<casos<<"\nCasos cerrados: "<<casosCerrados<<"\nCasos sin resolver: "<<casosSinResolver;
	return ss.str();

}