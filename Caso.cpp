#include "Caso.h"
#include "Evidencias.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Caso::Caso(int numero_caso, vector<Evidencias> evidencia, string hora, string fecha, bool completado){
	this->numero_caso = numero_caso;
	this->evidencia = evidencia;
	this->hora = hora;
	this->fecha = fecha;
	this->completado = completado;
}
Caso::~Caso(){

}
Caso::Caso(){
	
}
void Caso::setNumeroCaso(int numero_caso){
	this->numero_caso = numero_caso;
}

void Caso::setEvidencia(vector<Evidencias> evidencia){
	this->evidencia = evidencia;
}

void Caso::setHora(string hora){
	this->hora = hora;
}

void Caso::setFecha(string fecha){
	this->fecha = fecha;
}

void Caso::setCompletado(bool completado){
	this->completado = completado;
}

string Caso::toString() const{
	stringstream ss;
	ss<<"Hola";
	
	return ss.str();
}