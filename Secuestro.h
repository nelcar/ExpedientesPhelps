#include "Caso.h"
#include <string>
class Secuestro
{
	string victima;
	string lugar_secuestro;
	string motivo;
	bool rescate;
	int cantidad;
	bool completado_caso;
	string estado_victima;
public:
	string getVictima() const;
	void setVictima(string);
	string getLugar_secuestro() const;
	void setLugar_secuestro(string);
	string getMotivo() const;
	void setMotivo(string);
	bool getRescate() const;
	void setRescate(bool);
	int getCantidad() const;
	void setCantidad(int);
	bool getCompletado_caso() const;
	void setCompletado_caso(bool);
	string getEstado_victima() const;
	void setEstado_victima(string);
	string toString() const;
	Secuestro(string, string, string, bool, bool);
	Secuestro();
	~Secuestro();
	
};