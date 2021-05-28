#include <iostream>
#include <array>
//insertar linea de codigo que falta aqui
const int max = 10;

class Duty {
		std::string nombre;
	public:
		//insertar linea de codigo que falta aqui
		friend int main(int argc, char** argv);
		friend void fill_duty(std::array<Duty,max> &duties);
};

void fill_duty(std::array<Duty,max> &duties) {
	int i=0;
	for(Duty &duty : duties) {
		//insertar linea de codigo que falta aqui
		duty.nombre = std::to_string(++i);
	}
}


int main(int argc, char** argv) {
	std::array <Duty, max>duties;
	//insertar linea de codigo que falta aqui
	fill_duty(duties);
	for(Duty duty : duties)
		printf("%03d\n",std::atoi(duty.nombre.c_str()));
	return 0;
}