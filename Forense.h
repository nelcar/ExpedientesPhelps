#pragma once
#include <string>
#include "Persona.h"
using namespace std;
class Forense: public Persona{
	string fecha_ingreso;
	string horario;
public:
	Forense(string,string,int,string,string,string,string);
	Forense();
	~Forense();
	void setFecha_ingreso(string);
	void setHorario(string);
	
};