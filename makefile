clean: expedientes
	rm *.o

expedientes:	main.o Caso.o Evidencias.o Forense.o Homicidio.o Investigadores.o Persona.o PersonalAdministrativo.o Secuestro.o
	g++ main.o Caso.o Evidencias.o Forense.o Homicidio.o Investigadores.o Persona.o PersonalAdministrativo.o Secuestro.o -o expedientes
main.o:	main.cpp Caso.h Evidencias.h Forense.h Homicidio.h Investigadores.h Persona.h PersonalAdministrativo.h Secuestro.h
	g++ -c main.cpp
Caso.o:	Caso.cpp Caso.h Evidencias.h Investigadores.h
	g++ -c Caso.cpp
Evidencias.o:	Evidencias.cpp Evidencias.h
	g++ -c Evidencias.cpp
Forense.o:	Forense.cpp Forense.h Persona.h
	g++ -c Forense.cpp
Homicidio.o:	Homicidio.cpp Homicidio.h Caso.h
	g++ -c Homicidio.cpp
Investigadores.o:	Investigadores.cpp Investigadores.h Persona.h
	g++ -c Investigadores.cpp
Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp
PersonalAdministrativo.o: PersonalAdministrativo.cpp PersonalAdministrativo.h Persona.h
	g++ -c PersonalAdministrativo.cpp
Secuestro.o:	Secuestro.cpp Secuestro.h Caso.h
	g++ -c Secuestro.cpp
