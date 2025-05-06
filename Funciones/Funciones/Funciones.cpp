// Funciones.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

int x;
int y;
int suma;
int resta;
int multiplicacion;
int division;

void Pregunta() {
    cout << "Introduszce un primer valor: " << endl;
    cin >> x;
    cout << "Introduszce un segundo valor: " << endl;
    cin >> y;
}

void Calculo() {
    suma = x + y;
    resta = x - y;
    multiplicacion = x * y;
    division = x / y;
}

void Resultado() {
    cout << "La suma de los dos valores es: " << suma << endl;
    cout << "La resta de los dos valores es: " << resta << endl;
    cout << "La multiplicacion de los dos valores es: " << multiplicacion << endl;
    cout << "La division de los dos valores es: " << division << endl;
}

int main()
{
    Pregunta();
    Calculo();
    Resultado();
}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
