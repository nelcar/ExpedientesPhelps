#pragma once
#include <string>
using std::string

class Persona
{
	string nombre;
	string usuario;
	int edad;
	string id;
	string fecha_nac;
public:
	Persona(string,string,int,string,string);
	Persona();
	~Persona();

	virtual string toString() const;
	void setNombre(string);
	void setUsuario(string);
	void setEdad(int);
	void setId(string);
	void setFecha_nac(string);
	virtual void visualizar()= 0;

	
};