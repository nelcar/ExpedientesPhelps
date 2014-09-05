#include "Evidencias.h"
#include <iostream>
#include <sstream>
using namespace std;

Evidencias::Evidencias(){

}
Evidencias::Evidencias(string nombre, string tipoObjeto, string lugar, string huellas, string procesada){
	this->nombre = nombre;
	this->tipoObjeto = tipoObjeto;
	this->lugar = lugar;
	this->huellas = huellas;
	this-> procesada = procesada;
}
Evidencias::~Evidencias(){

}

string Evidencias::toString()const{
	stringstream ss;
	ss << "\nNombre: " << nombre << "\nTipo de Objeto: " << tipoObjeto<< "\nLugar donde fue encontrada: " 
		<< lugar<< "\nHuellas Digitales: " << huellas << "\nPrecesada: " << procesada;
	return ss.str();
}

void setNombre(string nombre){
	this->nombre = nombre;
}
void setTipoObjeto(string tipoObjeto){
	this->tipoObjeto = tipoObjeto;
}
void setlugar(string lugar){
	this->lugar = lugar;
}
void sethuellas(string huellas){
	this->huellas = huellas;
}
void setprocesada(string procesada){
	this->procesada = procesada;
}
string getNombre(){
	return nombre;
}
string getTipoObjeto(){
	return tipoObjeto;
}
string getlugar(){
	return lugar;
}
string gethuellas(){
	return gethuellas;
}
string getprocesada(){
	return procesada;
}