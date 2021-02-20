#include <iostream>
#include<string>
#include<iostream>
#include "Equipo.h"
#include "Liga.h"
#include "TablaPosiciones.h"
#include "Partido.h"

using namespace std;

int main() {
	cout<<"Ingrese el Nombre de la Liga a crear: " <<endl;
	string nomLiga="";
	cin>>nomLiga;
	Liga* liga = new Liga(nomLiga);
//	TablaPosiciones* tabla = new TablaPosiciones(nombre,0,0,0,0,0,0,0,0);
	srand(time(0));
	int opcion=1;
	while(opcion != 5) {
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
							string nombreEquipo;
							cout << "Ingrese el nombre del equipo: " << endl;
							getline(cin,nombreEquipo);
							getline(cin,nombreEquipo);
							int skill = 1+rand()%(101-1);
							liga -> crearEquipo(nombreEquipo,skill);
						}
						case 2: {
							//Modificar equipo
							int modificar=0;
							int posicion;
							liga->modificarEquipo(posicion, modificar);
							break;
						}
						case 3: {
							//Listar
							liga->listarEquipo();

							break;
						}
						case 4: {
							//eliminar producto
							int posicion;
							cout<< "Ingrese la posicion del equipo que desea eliminar: " << endl;
							cin >> posicion;
							liga->eliminarEquipo(posicion);
							break;
						}
						case 5: {
							//volver al menu principal
							break;
						}
					}
				}
			}
			case 2: {
				//Generar Jornada de Equipos
				break;
			}
			case 3: {
				//simulacion de Partidos
				break;
			}
			case 4: {
				//tabla de posiciones
				liga -> listarTabla();
				break;
			}
			case 5: {
				cout << "Gracias por usar el programa :)" << endl;
				break;
			}
		}
	}
	delete liga;
	return 0;
}