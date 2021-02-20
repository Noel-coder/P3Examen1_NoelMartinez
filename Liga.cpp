#include "Liga.h"
#include <iomanip>
using namespace std;

Liga::Liga(){
	
}

Liga::Liga(string nombreLiga) {
	this -> nombreLiga = nombreLiga;
}

Liga :: ~Liga() {

}

void Liga:: crearEquipo(string nombreEquipo, int skill) {
	equipos.push_back(new Equipo(nombreEquipo,skill));
}

void Liga:: listarTabla() {
	cout << "Liga "<<nombreLiga<<endl;
	cout << "Equipo	 G 	 E   P	 GF   GC   PTS  PJ"<<endl;
	for(int i=0; i < tablaPosiciones.size();i++){
		TablaPosiciones *tablaPos = tablaPosiciones[i]; 
		cout << setw(2) << i << ") "<<setw(2) << tablaPos->getNombre()<< setw(2) << tablaPos->getPartidosJugados()<<setw(2)<<tablaPos->getPartidosEmpatados() <<setw(2) <<tablaPos->getPartidosPerdidos() << setw(2) << tablaPos-> getGolesFavor() << setw(2) << tablaPos-> getGolesContra() << setw(2) << tablaPos -> getPuntosEquipo()<<endl;
	}
}

void Liga :: modificarEquipo(int opcion, int posicion) {
	switch(opcion) {
		case 1: {
			cout << "Ingrese la posicion que desea modificar: " << endl;
			cin>>posicion;
			string nombre="";
			cout << "Ingrese el nuevo nombre del equipo: "<<endl;
			cin >> nombre;
			for(int i=0; i < equipos.size(); i++) {
				if(i == posicion) {
					equipos.at(i)->setNombreEquipo(nombre);
				}
			}
			break;
		}
	}
}

void Liga::eliminarEquipo(int posicion) {
	for(int i=0; i < equipos.size(); i++) {
		if(i==posicion) {
			equipos.erase(equipos.begin()+1);
		}
	}
}

void Liga::listarEquipo(){
	for(int i = 0; i < equipos.size(); i++) {
		Equipo *listadoEquipo = equipos[i];
		cout <<"------" << "Equipo #" << i <<"------"<<endl;
		cout << "Nombre del Equipo: "<< listadoEquipo->getNombreEquipo() << endl;
		cout << "Skill: " << listadoEquipo->getSkill();
		cout << endl;
	}
}



