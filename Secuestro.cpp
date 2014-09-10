#include "Secuestro.h"
#include "Caso.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

Secuestro::Secuestro(int numero_caso, vector<Investigadores> investigadores,vector<Evidencias> evidencia, string hora, string fecha, bool completado, string victima, string lugar_secuestro, string motivo, bool rescate, bool completado_caso):Caso(numero_caso, investigadores, evidencia, hora, fecha, completado){
	this->victima = victima;
	this->lugar_secuestro = lugar_secuestro;
	this->motivo = motivo;
	this->rescate = rescate;
	this->completado_caso = completado_caso;
}

Secuestro::Secuestro(){

}
Secuestro::~Secuestro(){

}
void Secuestro::setVictima(string victima){
	this->victima = victima;
}

void Secuestro::setLugar_secuestro(string lugar_secuestro){
	this->lugar_secuestro = lugar_secuestro;
}

void Secuestro::setMotivo(string motivo){
	this->motivo = motivo;
}

void Secuestro::setRescate(bool rescate){
	this->rescate = rescate;
}

void Secuestro::setCantidad(int cantidad){
	this->cantidad = cantidad;
}

void Secuestro::setCompletado_caso(bool completado_caso){
	this->completado_caso = completado_caso;
}

void Secuestro::setEstado_victima(string estado_victima){
	this->estado_victima = estado_victima;
}

string Secuestro::toString() const{
	stringstream ss;
	ss.str("");
	ss<<"Victima: "<<victima<<endl;
	ss<<"Lugar de secuestro: "<<lugar_secuestro<<endl;
	ss<<"Motivo: "<<motivo<<endl;
	if (rescate==true){
		ss<<"Rescate: si"<<endl;
		ss<<"Cantidad: "<<cantidad<<endl;
	}else{
		ss<<"Rescate: no"<<endl;
	}
	if (completado_caso==true){
		ss<<"Completado: si"<<endl;
		ss<<"Estado de la victima: "<<estado_victima<<endl;
	}else{
		ss<<"Completado: no"<<endl;
	}
	return ss.str();
}