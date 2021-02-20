#ifndef PARTIDO_H
#define PARTIDO_H
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Partido {
	private:
		string equipo1;
		string equipo2;
		int golesEquipo1;
		int golesEquipo2;
		bool jugo;

	public:
		Partido();
		Partido(string,string,int,int,bool);
		~Partido();
		string getEquipo1();
		void setEquipo1(string);
		string getEquipo2();
		void setEquipo2(string);
		int getGolesEquipo1();
		void setGolesEquipo1(int);
		int getGolesEquipo2();
		void setGolesEquipo2(int);
};

#endif