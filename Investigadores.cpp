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
Investigadores::Investigadores(){}
Investigadores::~Investigadores(){}
void setCasos(int casos){
	this->casos=casos;
}
void setCasosCerrados(int casosCerrados){
	this->casosCerrados=casosCerrados;
}
void setCasosSinResolver(int casosSinResolver){
	this->casosSinResolver=casosSinResolver;
}