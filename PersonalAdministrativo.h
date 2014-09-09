#pragma once
#include <string>
#include "Persona.h"
using namespace std;
class PersonalAdministrativo: public Persona{
	string claveIngreso;
	string puesto;
public:
	PersonalAdministrativo(string,string,int,string,string,string,string);
	PersonalAdministrativo();
	~PersonalAdministrativo();
	void setClaveIngreso(string);
	void setPuesto(string);
	virtual string toString() const;
};