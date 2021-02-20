#ifndef EQUIPO_H
#define EQUIPO_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <iomanip>

using namespace std;

class Equipo {
	private:
		string nombreEquipo;
		int skill;

	public:
		Equipo();
		Equipo(string,int);
		~Equipo();
		string getNombreEquipo();
		void setNombreEquipo(string);
		int getSkill();
		void setSkill(int);
};

#endif