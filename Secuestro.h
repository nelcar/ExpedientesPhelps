#pragma once
#include "Caso.h"
#include <string>
using namespace std;

class Secuestro: public Caso
{
	string victima;
	string lugar_secuestro;
	string motivo;
	bool rescate;
	int cantidad;
	bool completado_caso;
	string estado_victima;
public:
	void setVictima(string);
	void setLugar_secuestro(string);
	void setMotivo(string);
	void setRescate(bool);
	void setCantidad(int);
	void setCompletado_caso(bool);
	void setEstado_victima(string);
	string toString() const;
	Secuestro(int, vector<Investigadores>,vector<Evidencias>, string, string, bool, string, string, string, bool, bool);
	Secuestro();
	~Secuestro();
	
};