#pragma once
#include <string>
#include "Persona.h"
using namespace std;
class Investigadores; public Persona{
	int casos,casosCerrados,casosSinResolver;
public:
	Investigadores();
	Investigadores(string,string,int,string,string,int,int,int);
	~Investigadores();
	void setCasos(int);
	void setCasosCerrados(int);
	void setCasosSinResolver(int);
	
};