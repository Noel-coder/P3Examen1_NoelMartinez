#include <iostream>
#include<string>
#include<iostream>

using namespace std;

int main() {
	int opcion=1;
	while(opcion != 4) {
		cout << "Menu" << endl
		     << "1. Mantenimiento de Equipos: " << endl
		     << "2. Generar Jornada de Equipos: " << endl
		     << "3. Simular Partidos: "<< endl
		     << "4. Imprimir tabla de posiciones por jornada y los resultados de esa jornada: "<<endl
		     << "5. Salir "<<endl;
		cout << "Ingrese una opcion: " << endl;
		cin>>opcion;
		switch(opcion) {
			case 1: {
				int opcionSubmenu=1;
				while(opcionSubmenu!=5) {
					cout<< "[Mantenimiento de Equipos]" << endl
					    << "1. Crear Equipo: " << endl
					    << "2. Modificar Equipo: " << endl
					    << "3. Listar Equipo: " << endl
					    << "4. Eliminar un equipo: " << endl
					    << "5. Regresar al menu principal: "<<endl;
					cout << "Ingrese una opcion: " << endl;
					cin >> opcionSubmenu;
					switch(opcionSubmenu) {
						case 1: {
							//Crear Equipo
							
							}
							return 0;
						}