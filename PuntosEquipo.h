#ifndef PUNTOSEQUIPO_H
#define PUNTOSEQUIPO_H
#include <iostream>
#include <string>
#include <vector>
#include "Partido.h"
using namespace std;

class PuntosEquipo
{
	private:
		vector <Partido*> partidos;
		string nombre ="";
		int partidosJugados;
		int partidosGanados;
		int partidosEmpatados;
		int partidosPerdidos;
		int golesFavor;
		int golesContra;
		int puntosEquipo;
	public:
		PuntosEquipo();
		PuntosEquipo(string,int,int,int,int,int,int,int);
		~PuntosEquipo();
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