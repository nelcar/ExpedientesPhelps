#pragma once
#include "Evidencias.h"
#include "Investigadores.h"
#include <vector>
#include <string>
class Caso
{
	int numero_caso;
	vector<Investigadores> investigadores;
	vector<Evidencias> evidencia;
	string hora;
	string fecha;
	bool completado;
public:
	Caso();
	void setNumeroCaso(int);
	void setInvestigadores(vector<Investigadores>);
	void setEvidencia(vector<Evidencias>);
	void setHora(string);
	void setFecha(string);
	void setCompletado(bool);
	string toString() const;
	Caso(int, vector<Investigadores>,vector<Evidencias>, string, string, bool);
	~Caso();
	
};