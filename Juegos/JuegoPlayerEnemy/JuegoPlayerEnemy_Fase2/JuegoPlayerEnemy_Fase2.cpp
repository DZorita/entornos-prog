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

void heroAttackEnemy();
void enemyAttackHero();
void printStatusHero();
void printStatusEnemy();







void heroAttackEnemy() {
    while (HP_enemy > 0) {
        cout << "Elige un ataque (golpe/espada): ";
        cin >> ataque;

        if (ataque == "espada") {
            cout << "Has atacado con espada." << endl;
            HP_enemy -= AV_hero_espada;
        }
        else if (ataque == "golpe") {
            cout << "Has atacado con golpe." << endl;
            HP_enemy -= AV_hero_golpe;
        }
        else {
            cout << "Ataque no válido." << endl;
            continue; 
        }

        printStatusEnemy();

        if (HP_enemy <= 0) {
            cout << "Has derrotado al Enemigo." << endl;
            break;
        }
        enemyAttackHero();
    }
}

void enemyAttackHero() {
    while (HP_hero > 0) {
        cout << "Elige un ataque (golpe/espada): ";
        cin >> ataque;

        if (ataque == "espada") {
            cout << "El enemigo te ha atacado con espada." << endl;
            HP_hero -= AV_enemy_espada;
        }
        else if (ataque == "golpe") {
            cout << "El enemigo te ha atacado con golpe." << endl;
            HP_hero -= AV_enemy_golpe;
        }
        else {
            cout << "Ataque no válido." << endl;
            continue;
        }

        printStatusHero();

        if (HP_hero <= 0) {
            cout << "Has sido derrotado por el Enemigo." << endl;
            break;
        }
    }
}





void printStatusHero() {
    cout << "Al héroe le quedan: " << HP_hero << " HP." << endl;
}

void printStatusEnemy() {
    cout << "Al enemigo le quedan: " << HP_enemy << " HP." << endl;
}






int main() {
    cout << "¿Quieres entrar en partida (S/N)? ";
    cin >> partida;

    while (partida == "S") {
        cout << "Escoge tu jugador (Hero/Enemy): ";
        cin >> jugador;

        if (jugador == "Hero") {
            cout << "Jugador: Héroe" << endl;
            cout << "HP: " << HP_hero << endl;
            cout << "       " << endl;
            cout << "       " << endl;
            cout << " !EMPIEZA LA PARTIDA! " << endl;
            cout << "       " << endl;
            cout << "       " << endl;
            heroAttackEnemy();
        }
        else if (jugador == "Enemy") {
            cout << "Jugador: Enemigo" << endl;
            cout << "HP: " << HP_enemy << endl;
            cout << "       " << endl;
            cout << "       " << endl;
            cout << " !EMPIEZA LA PARTIDA! " << endl;
            cout << "       " << endl;
            cout << "       " << endl;
            enemyAttackHero();
        }
        else {
            cout << "Error! Elige entre Hero/Enemy." << endl;
        }
        cout << "¿Quieres jugar otra partida? (S/N): ";
        cin >> partida;
    }

    return 0;
}
