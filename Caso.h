#include <vector>
#include <string>
class Caso
{
	int numero_caso;
	vector<Investigadores> investigadores;
	vector<Evidencia> evidencia;
	string hora;
	string fecha;
	bool completado;
public:
	Caso();
	void setNumeroCaso(int);
	void setInvestigadores(vector<Investigadores>);
	void setEvidencia(vector<Evidencia>);
	void setHora(string);
	void setFecha(string);
	void setCompletado(bool);
	string toString() const;
	Caso(int, vector<Investigadores>,vector<Evidencia>, string, string, bool);
	~Caso();
	
};