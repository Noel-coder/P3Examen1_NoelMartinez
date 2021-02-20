#include "PuntosEquipo.h"

PuntosEquipo::PuntosEquipo() {

}

PuntosEquipo::~PuntosEquipo() {
	cout << "Se destruyo los Puntos por Equipo" << endl;
}

PuntosEquipo::PuntosEquipo(string nombre, int partidosJugados, int partidosGanados, int partidosEmpatados, int partidosPerdidos, int golesFavor, int golesContra, int puntosEquipo) {
	this -> nombre = nombre;
	this -> partidosJugados = partidosJugados;
	this -> partidosEmpatados = partidosEmpatados;
	this -> partidosPerdidos = partidosPerdidos;
	this -> golesFavor = golesFavor;
	this -> golesContra =  golesContra;
	this -> puntosEquipo = puntosEquipo;
}

string PuntosEquipo::getNombre() {
	return this->nombre;
}

void PuntosEquipo::setNombre(string _nombrePuntosEquipo) {
	this->nombre = _nombrePuntosEquipo;
}

int PuntosEquipo::getPartidosJugados() {
	return this->partidosJugados;
}

void PuntosEquipo::setPartidosJugados(int _partidosJugados) {
	this->partidosJugados = _partidosJugados;
}

int PuntosEquipo::getPartidosEmpatados() {
	return this->partidosEmpatados;
}

void PuntosEquipo::setPartidosEmpatados(int _partidosEmpatados) {
	this->partidosEmpatados = _partidosEmpatados;
}
int PuntosEquipo::getPartidosPerdidos() {
	return this->partidosPerdidos;
}

void PuntosEquipo::setPartidosPerdidos(int _partidosPerdidos) {
	this->partidosPerdidos = _partidosPerdidos;
}
int PuntosEquipo::getGolesFavor(){
	return this->golesFavor;
}
void PuntosEquipo::setGolesFavor(int _golesFavor){
	this -> golesFavor = _golesFavor;
}

int PuntosEquipo::getGolesContra(){
	return this->golesContra;
}
void PuntosEquipo::setGolesContra(int _golesContra){
	this -> golesContra = _golesContra;
}

int PuntosEquipo::getPuntosEquipo(){
	return this->puntosEquipo;
}
void PuntosEquipo::setPuntosEquipo(int _puntosEquipo){
	this -> puntosEquipo = _puntosEquipo;
}
