

#include <cmath>
#include <iostream>
using namespace std;

double a;
double b;
double c;
double positivo_sqrt;
double prim_apart;
double dentro_sqrt;
double segun_apart;
double tercer_apart;
double resultado_positivo;
double  resultado_negativo;


void Pregunta() {

	do
	{
		cout << "Introduce el coeficiente a: ";
		cin >> a;
	} while (a == 0);
	
	do
	{
		cout << "Introduce el coeficiente b: ";
		cin >> b;
	} while (b == 0);
	
	do
	{
		cout << "Introduce el coeficiente c: ";
		cin >> c;
	} while (c == 0);

}

void Calculo() {

	prim_apart = -b;
	dentro_sqrt = (b * b) - (4 * a * c);

	if (dentro_sqrt < 0) {
		cout << "No tiene solucion." <<endl;
		resultado_positivo = 0;
		resultado_negativo = 0;
		
	}
	else if (dentro_sqrt == 0){
		cout << "Tiene 1 solucion." <<endl;
		resultado_positivo = prim_apart / (2 * a);
		resultado_negativo = resultado_positivo;
		
	}
	else {
		segun_apart = sqrt(dentro_sqrt);
		tercer_apart = 2 * a;

		cout << "Tiene 2 soluciones." << endl;
		resultado_positivo = (prim_apart + segun_apart) / tercer_apart;
		resultado_negativo = (prim_apart - segun_apart) / tercer_apart;
	}
}

void Resultado() {
	if (dentro_sqrt < 0) {
		return;
	}
	else if (dentro_sqrt == 0) {
		cout << "El resultado: " << resultado_positivo;
		cout << "    " << endl;
	}
	else{
	cout << "El resultado en postivo (+): " << resultado_positivo;
	cout << "    " << endl;
	cout << "El resultado en negativo (-): " << resultado_negativo;
	cout << "    " << endl;
	cout << "    " << endl;
}
}


int main()
{
	Pregunta();
	Calculo();
	Resultado();

}
