#include <cmath>
#include <iostream>
#include <string>
using namespace std;

void heroAttackEnemy(int& HP_enemy, string& ataque, int AV_hero_espada, int AV_hero_golpe, int HP_hero, int AV_enemy_espada, int AV_enemy_golpe) {
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

        printStatusEnemy(HP_enemy);

        if (HP_enemy <= 0) {
            cout << "Has derrotado al Enemigo." << endl;
            break;
        }
        enemyAttackHero(HP_hero, ataque, AV_enemy_espada, AV_enemy_golpe);
    }
}

void enemyAttackHero(int& HP_hero, string& ataque, int AV_enemy_espada, int AV_enemy_golpe) {
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

        printStatusHero(HP_hero);

        if (HP_hero <= 0) {
            cout << "Has sido derrotado por el Enemigo." << endl;
            break;
        }
    }
}

void printStatusHero(int HP_hero) {
    cout << "Al héroe le quedan: " << HP_hero << " HP." << endl;
}

void printStatusEnemy(int HP_enemy) {
    cout << "Al enemigo le quedan: " << HP_enemy << " HP." << endl;
}

int main() {
    int HP_hero = 100;
    int HP_enemy = 80;

    int AV_hero_espada = 20;
    int AV_hero_golpe = 10;

    int AV_enemy_espada = 15;
    int AV_enemy_golpe = 5;
    string ataque;
    string partida;
    string jugador;

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
            heroAttackEnemy(HP_enemy, ataque, AV_hero_espada, AV_hero_golpe, HP_hero, AV_enemy_espada, AV_enemy_golpe);
        }
        else if (jugador == "Enemy") {
            cout << "Jugador: Enemigo" << endl;
            cout << "HP: " << HP_enemy << endl;
            cout << "       " << endl;
            cout << "       " << endl;
            cout << " !EMPIEZA LA PARTIDA! " << endl;
            cout << "       " << endl;
            cout << "       " << endl;
            enemyAttackHero(HP_hero, ataque, AV_enemy_espada, AV_enemy_golpe);
        }
        else {
            cout << "Error! Elige entre Hero/Enemy." << endl;
        }
        cout << "¿Quieres jugar otra partida? (S/N): ";
        cin >> partida;
    }
}
