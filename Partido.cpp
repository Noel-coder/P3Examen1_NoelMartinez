#include "Partido.h"

Partido::Partido() {

}

Partido::~Partido() {
	cout << "Se destruyo el Partido" << endl;
}

Partido::Partido(string equipo1, string equipo2, int golesEquipo1, int golesEquipo2, bool jugo) {
	this -> equipo1 = equipo1;
	this -> equipo2= equipo2;
	this -> golesEquipo1 = golesEquipo1;
	this -> golesEquipo2 = golesEquipo2;
	this -> jugo = jugo;
}

string Partido::getEquipo1() {
	return this->equipo1;
}

void Partido::setEquipo1(string _equipo1) {
	this->equipo1 = _equipo1;
}

string Partido::getEquipo2() {
	return this->equipo2;
}

void Partido::setEquipo2(string _equipo2) {
	this->equipo2 = _equipo2;
}

int Partido::getGolesEquipo1(){
	return this -> golesEquipo1;
}

void Partido::setGolesEquipo1(int _golesEquipo1){
	this-> golesEquipo1 = _golesEquipo1;
}

int Partido::getGolesEquipo2(){
	return this -> golesEquipo2;
}

void Partido::setGolesEquipo2(int _golesEquipo2){
	this-> golesEquipo2 = _golesEquipo2;
}

