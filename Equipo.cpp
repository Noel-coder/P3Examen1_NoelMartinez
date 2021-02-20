#include "Equipo.h"

Equipo::Equipo() {

}

Equipo::~Equipo(){
  cout << "Se destruyo el Equipo" << endl;
}

Equipo::Equipo(string nombreEquipo, int skill) {
	this -> nombreEquipo = nombreEquipo;
	this -> skill=skill;
}

string Equipo::getNombreEquipo(){
  return this->nombreEquipo;
}

void Equipo::setNombreEquipo(string _nombreEquipo){
  this->nombreEquipo = _nombreEquipo;
}

int Equipo::getSkill(){
  return this->skill;
}

void Equipo::setSkill(int _skill){
  this->skill = _skill;
}

