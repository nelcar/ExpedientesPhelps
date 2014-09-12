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
	void setLugar(string);
	void setHuellas(string);
	void setProcesada(string);
	string getNombre();
	string getTipoObjeto();
	string getLugar();
	string getHuellas();
	string getProcesada();
	/* data */
};