#ifndef LIGA_H
#define LIGA_H
#include <iostream>
#include <string>
#include <vector>
#include "Equipo.h"
#include "TablaPosiciones.h"
#include "Partido.h"
using namespace std;

class Liga {
	private:
		string nombreLiga;
		vector <Equipo*> equipos;
		vector <TablaPosiciones*> tablaPosiciones;
		vector <Partido*> partidos;
	public:
		Liga();
		~Liga();
		Liga(string);
		void crearEquipo(string, int);
		void modificarEquipo(int, int);
		void eliminarEquipo(int);
		void listarEquipo();
		void listarTabla();
};
#endif