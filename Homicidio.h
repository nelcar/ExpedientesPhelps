#include "Caso.h"
#include <vector>
#include <string>
class Homicidio
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
	Homicidio(vector<string>, string, string);
	Homicidio();
	~Homicidio();
	
};