#include "TablaPosiciones.h"

TablaPosiciones::TablaPosiciones() {

}

TablaPosiciones::~TablaPosiciones() {
	cout << "Se destruyo la Tabla de Posiciones" << endl;
}

TablaPosiciones::TablaPosiciones(string nombre, int partidosJugados, int partidosGanados, int partidosEmpatados, int partidosPerdidos, int golesFavor, int golesContra, int puntosEquipo) {
	this -> nombre = nombre;
	this -> partidosJugados = partidosJugados;
	this -> partidosEmpatados = partidosEmpatados;
	this -> partidosPerdidos = partidosPerdidos;
	this -> golesFavor = golesFavor;
	this -> golesContra =  golesContra;
	this -> puntosEquipo = puntosEquipo;
}

string TablaPosiciones::getNombre() {
	return this->nombre;
}

void TablaPosiciones::setNombre(string _nombreTablaPosiciones) {
	this->nombre = _nombreTablaPosiciones;
}

int TablaPosiciones::getPartidosJugados() {
	return this->partidosJugados;
}

void TablaPosiciones::setPartidosJugados(int _partidosJugados) {
	this->partidosJugados = _partidosJugados;
}

int TablaPosiciones::getPartidosEmpatados() {
	return this->partidosEmpatados;
}

void TablaPosiciones::setPartidosEmpatados(int _partidosEmpatados) {
	this->partidosEmpatados = _partidosEmpatados;
}
int TablaPosiciones::getPartidosPerdidos() {
	return this->partidosPerdidos;
}

void TablaPosiciones::setPartidosPerdidos(int _partidosPerdidos) {
	this->partidosPerdidos = _partidosPerdidos;
}
int TablaPosiciones::getGolesFavor(){
	return this->golesFavor;
}
void TablaPosiciones::setGolesFavor(int _golesFavor){
	this -> golesFavor = _golesFavor;
}

int TablaPosiciones::getGolesContra(){
	return this->golesContra;
}
void TablaPosiciones::setGolesContra(int _golesContra){
	this -> golesContra = _golesContra;
}

int TablaPosiciones::getPuntosEquipo(){
	return this->puntosEquipo;
}
void TablaPosiciones::setPuntosEquipo(int _puntosEquipo){
	this -> puntosEquipo = _puntosEquipo;
}


