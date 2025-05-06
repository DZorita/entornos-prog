// SegundoGrado.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
	double a;
	double b;
	double c;
	double positivo_sqrt;


	cout << "Introduce el coeficiente a: ";
	cin >> a;
	cout << "Introduce el coeficiente b: ";
	cin >> b;
	cout << "Introduce el coeficiente c: ";
	cin >> c;

	double prim_apart = -b;
	double dentro_sqrt = (b * b) - (4 * a * c);

	if (dentro_sqrt < 0) {
		cout << "No se puede calcular";
		cout << "    " << endl;
		cout << "    " << endl;
	}
	else {

		double segun_apart = sqrt(dentro_sqrt);
		double tercer_apart = 2 * a;

		double resultado_positivo = (prim_apart + segun_apart) / tercer_apart;
		double  resultado_negativo = (prim_apart - segun_apart) / tercer_apart;

		cout << "El resultado en postivo (+): " << resultado_positivo;
		cout << "    " << endl;
		cout << "El resultado en negativo (-): " << resultado_negativo;
		cout << "    " << endl;
		cout << "    " << endl;
	}
}

