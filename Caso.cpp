#include "Caso.h"
#include "Evidencias.h"
#include <iostream>
#include <string>
using namespace std;

Caso::Caso(int numero_caso, vector<Investigadores> investigadores,vector<Evidencias> evidencia, string hora, string fecha, bool completado){
	this->numero_caso = numero_caso;
	this->investigadores = investigadores;
	this->evidencia = evidencia;
	this->hora = hora;
	this->fecha = fecha;
	this->completado = completado;
}

void Caso::setNumeroCaso(int numero_caso){
	this->numero_caso = numero_caso;
}

void Caso::setInvestigadores(vector<Investigadores> investigadores){
	this->investigadores = investigadores;
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
	cout<<"Numero de caso: "<<numero_caso<<endl;
	for (int i = 0; i < investigadores.size(); ++i){
		cout<<"Investigador "<<i+1<<": "<<investigadores[i]<<endl;	
	}
	for (int i = 0; i < evidencia.size(); ++i){
		cout<<"Evidencia "<<i+1<<": "<<evidencia[i]<<endl;
	}
	cout<<"Hora: "<<hora<<endl;
	cout<<"Fecha: "<<fecha<<endl;
	if (completado == true);{
		cout<<"Completado: si"<<endl;
	}else {
		cout<<"Completado: no"<<endl;
	}
}