#include "Homicidio.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

Homicidio::Homicidio(vector<string> sospechosos, string sospechoso_principal, string victima){
	this->sospechosos = sospechosos;
	this->sospechoso_principal = sospechoso_principal;
	this->victima = victima;
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

}