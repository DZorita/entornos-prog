// JuegoPlayerEnemy.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <cmath>
#include <iostream>
#include <string>
using namespace std;


int HP_hero = 100;
int HP_enemy = 80;

int AV_hero_espada = 20;
int AV_hero_golpe = 10;

int AV_enemy_espada = 15;
int AV_enemy_golpe = 5;
string ataque;
string partida;
string jugador;




int main()
{
    cout << "Quieres entrar en partida(S/N): ";
    cin >> partida;

    while (partida == "S") {
        cout << "Escoge tu jugador(Hero/Enemy): ";
        cin >> jugador;

        if (jugador == "Hero") {
            cout << "Player: Hero" << endl;
            cout << "HitPoint: " << HP_hero << endl;
            cout << "       " << endl;
            cout << "       " << endl;
            cout << " !EMPIEZA LA PARTIDA! " << endl;
            cout << "       " << endl;
            cout << "       " << endl;


            cout << ("Elige un ataque (golpe/espada): ") << endl;
            cin >> ataque;

            while (HP_enemy != 0) {

                if (ataque._Equal("espada"))
                {
                    cout << "Has atacdo con espada." << endl;
                    HP_enemy -= AV_hero_espada;
                    cout << "Al enemigo le queda: " << HP_enemy << endl;
                }
                if (ataque._Equal("golpe"))
                {
                    cout << "Has atacdo con golpe." << endl;
                    HP_enemy -= AV_hero_golpe;
                    cout << "Al enemigo le queda: " << HP_enemy << endl;
                }
                else {
                    cout << "No hay ataque" << endl;
                }

            }
            if (HP_enemy == 0) {
                cout << "Has derrotado al Enemigo." << endl;
                break;
            }
        }

        else {
            cout << "Player: Enemy" << endl;
            cout << "HitPoint: " << HP_enemy << endl;
            cout << "   " << endl;
            cout << "   " << endl;
            cout << "   " << endl;
            cout << "¡EMPIEZA LA PARTIDA!" << endl;
            cout << "   " << endl;
            cout << "   " << endl;

            cout << "Elige un ataque (golpe/espada): " << endl;
            cin >> ataque;

            while (HP_hero != 0) {

                if (ataque._Equal("espada"))
                {
                    cout << "Has atacdo con espada." << endl;
                    HP_hero -= AV_enemy_espada;
                    cout << "Al heroe le queda: " << HP_hero << endl;
                }
                if (ataque._Equal("golpe"))
                {
                    cout << "Has atacdo con golpe." << endl;
                    HP_hero -= AV_enemy_golpe;
                    cout << "Al heroe le queda: " << HP_hero << endl;
                }
                else {
                    cout << "No hay ataque" << endl;
                }

            }
            if (HP_hero == 0) {
                cout << "Has derrotado al Enemigo." << endl;
                break;
            }
        }

    }
}
