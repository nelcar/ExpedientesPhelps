#pragma once
#include <string>
using std::string;

class Evidencias
{
	string nombre;
	string tipoObjeto;
	string lugar;
	string huellas;
	string procesada;
public:
	Evidencias();
	Evidencias(string, string, string, string, string);
	~Evidencias();

	string toString()const;

	void setNombre(string);
	void setTipoObjeto(string);
	void setlugar(string);
	void sethuellas(string);
	void setprocesada(string);
	string getNombre();
	string getTipoObjeto();
	string getlugar();
	string gethuellas();
	string getprocesada();
	/* data */
};