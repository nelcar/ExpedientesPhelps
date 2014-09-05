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
	int getNumeroCaso() const;
	void setNumeroCaso(int numero_caso);
	vector<Investigadores> getInvestigadores() const;
	void setInvestigadores(vector<Investigadores>);
	vector<Evidencia> getEvidencia() const;
	void setEvidencia(vector<Evidencia>);
	string getHora() const;
	void setHora(string);
	string getFecha() const;
	void setFecha(string);
	bool getCompletado() const;
	void setCompletado(bool);
	string toString() const;
	Caso(int, vector<Investigadores>,vector<Evidencia>, string, string, bool);
	~Caso();
	
};