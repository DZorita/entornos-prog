// Daniel_Zorita_Fontanet.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int main()
{
    double num1;
    double num2;

    cout << "Introduce el primer valor: ";
    cin >> num1;

    cout << "Introduce el segundo valor: ";
    cin >> num2;


    double suma = num1 + num2;
    cout << "La suma de los dos valores son: " << suma << "\n";

    double resta = num1 - num2;
    cout << "La resta de los dos valores son: " << resta << "\n";

    double multiplicacion = num1 * num2;
    cout << "La multiplicacion de los dos valores son: " << multiplicacion  << "\n";

    
    double division = num1 / num2;
    cout << "La division de los dos valores son: " << division << "\n";
}

