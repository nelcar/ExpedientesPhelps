#include "Evidencias.h"
#include <iostream>
#include <sstream>
using std::string;
using namespace std;

Evidencias::Evidencias(){

}
Evidencias::Evidencias(string nombre, string tipoObjeto, string lugar, string huellas, string procesada){
	this->nombre = nombre;
	this->tipoObjeto = tipoObjeto;
	this->lugar = lugar;
	this->huellas = huellas;
	this->procesada = procesada;
}
Evidencias::~Evidencias(){

}

string Evidencias::toString()const{
	stringstream ss;
	ss << "\nNombre: " << nombre << "\nTipo de Objeto: " << tipoObjeto<< "\nLugar donde fue encontrada: " 
		<< lugar<< "\nHuellas Digitales: " << huellas << "\nPrecesada: " << procesada;
	return ss.str();
}

void Evidencias::setNombre(string nombre){
	this->nombre = nombre;
}
void Evidencias::setTipoObjeto(string tipoObjeto){
	this->tipoObjeto = tipoObjeto;
}
void Evidencias::setLugar(string lugar){
	this->lugar = lugar;
}
void Evidencias::setHuellas(string huellas){
	this->huellas = huellas;
}
void Evidencias::setProcesada(string procesada){
	this->procesada = procesada;
}
string Evidencias::getNombre(){
	return nombre;
}
string Evidencias::getTipoObjeto(){
	return tipoObjeto;
}
string Evidencias::getLugar(){
	return lugar;
}
string Evidencias::getHuellas(){
	return huellas;
}
string Evidencias::getProcesada(){
	return procesada;
}