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
	vector<string> getSospechosos() const;
	void setSospechosos(vector<string>);
	string getSospechoso_principal() const;
	void setSospechoso_principal(string);
	string getVictima() const;
	void setVictima(string);
	string getCulpable() const;
	void setCulpable(string);
	string toString() const;
	Homicidio(vector<string>, string, string, string);
	Homicidio();
	~Homicidio();
	
};