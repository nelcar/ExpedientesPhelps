#include <iostream>
#include <string>
using namespace std;

Secuestro(string victima, string lugar_secuestro, string motivo, bool rescate, bool completado_caso){
	this->victima = victima;
	this->lugar_secuestro = lugar_secuestro;
	this->motivo = motivo;
	this->rescate = rescate;
	this->completado_caso = completado_caso;
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
	this->sospechosos = sospechosos;
}