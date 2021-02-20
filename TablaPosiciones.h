#ifndef TABLAPOSICIONES_H
#define TABLAPOSICIONES_H
#include <iostream>
#include <string>
#include <vector>
#include "Partido.h"
#include "PuntosEquipo.h"
using namespace std;

class TablaPosiciones {
	private:
		vector <Partido*> partidos;
		vector <PuntosEquipo*> puntosequipo;
		string nombre ="";
		int partidosJugados;
		int partidosGanados;
		int partidosEmpatados;
		int partidosPerdidos;
		int golesFavor;
		int golesContra;
		int puntosEquipo;

	public:
		TablaPosiciones();
		TablaPosiciones(string,int,int,int,int,int,int,int);
		~TablaPosiciones();
		string getNombre();
		void setNombre(string);
		int getPartidosJugados();
		void setPartidosJugados(int);
		int getPartidosGanados();
		void setPartidosGanados(int);
		int getPartidosEmpatados();
		void setPartidosEmpatados(int);
		int getPartidosPerdidos();
		void setPartidosPerdidos(int);
		int getGolesFavor();
		void setGolesFavor(int);
		int getGolesContra();
		void setGolesContra(int);
		int getPuntosEquipo();
		void setPuntosEquipo(int);
};
#endif