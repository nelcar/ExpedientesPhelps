#pragma once
#include "Caso.h"
#include <vector>
#include <string>
using namespace std;

class Homicidio: public Caso
{
	vector<string> sospechosos;
	string sospechoso_principal;
	string victima;
	string culpable;
public:
	void setSospechosos(vector<string>);
	void setSospechoso_principal(string);
	void setVictima(string);
	void setCulpable(string);
	string toString() const;
	Homicidio(int, vector<Investigadores>,vector<Evidencias>, string, string, bool, vector<string>, string, string);
	Homicidio();
	~Homicidio();
	
};