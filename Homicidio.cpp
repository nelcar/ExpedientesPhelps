#include "Homicidio.h"
#include "Caso.h"
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

Homicidio::Homicidio(int numero_caso, vector<Investigadores> investigadores,vector<Evidencias> evidencia, string hora, string fecha, bool completado, vector<string> sospechosos, string sospechoso_principal, string victima):Caso(numero_caso, investigadores, evidencia, hora, fecha, completado){
	this->sospechosos = sospechosos;
	this->sospechoso_principal = sospechoso_principal;
	this->victima = victima;
}
Homicidio::Homicidio(){

}
Homicidio::~Homicidio(){

}
void Homicidio::setSospechosos(vector<string> sospechosos){
	this->sospechosos = sospechosos;
}

void Homicidio::setSospechoso_principal(string sospechoso_principal){
	this->sospechoso_principal = sospechoso_principal;
}

void Homicidio::setVictima(string victima){
	this->victima = victima;
}

void Homicidio::setCulpable(string culpable){
	this->culpable = culpable;
}

string Homicidio::toString() const{
	stringstream ss;
	ss.str("");
	for (int i = 0; i < sospechosos.size(); ++i){
		ss<<"Sospechoso "<<(i+1)<<": "<<(sospechosos[i])<<endl;
	}
	ss<<"Sospechoso principal: "<<sospechoso_principal<<endl;
	ss<<"Victima: "<<victima<<endl;
	return ss.str();
}