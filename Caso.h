#pragma once
#include "Evidencias.h"
#include <vector>
#include <string>
using namespace std;

class Caso
{
	int numero_caso;
	vector<Evidencias> evidencia;
	string hora;
	string fecha;
	bool completado;
public:
	Caso();
	void setNumeroCaso(int);
	void setEvidencia(vector<Evidencias>);
	void setHora(string);
	void setFecha(string);
	void setCompletado(bool);
	string toString() const;
	Caso(int,vector<Evidencias>, string, string, bool);
	~Caso();
	
};