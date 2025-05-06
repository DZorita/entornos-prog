#include <iostream>
#include "Character.h"
#include <string>
using namespace std;

int main()
{
    Character hero("Hero", 100, 20, 15);
    Character enemy("Enemy", 100, 12, 8);
    Character finalBoss("BOSS", 120, 17, 10);
    string ataque;
    string partida;
    string jugador;

    cout << "Quieres entrar en partida(S/N): ";
    cin >> partida;

    while (partida == "S") {
        cout << "Escoge tu jugador(Hero/Enemy): ";
        cin >> jugador;

        if (jugador == "Hero") {
            cout << "Player: " << hero.getName() << endl;
            cout << "HitPoint: " << hero.getHP() << endl;
            cout << "" << endl;
            cout << "" << endl;
            cout << " --------!EMPIEZA LA PARTIDA!-------- " << endl;
            cout << "" << endl;
            cout << "" << endl;

            while (enemy.getHP() > 0 && hero.getHP() > 0) {
                cout << "Elige un ataque (golpe/espada): ";
                cin >> ataque;
                if (ataque == "espada") {
                    cout << "Has atacado con espada." << endl;
                    enemy.setHP(enemy.getHP() - hero.getAVSword());
                    cout << "Al enemigo le queda: " << enemy.getHP() << " HP" << endl;
                }
                else if (ataque == "golpe") {
                    cout << "Has atacado con golpe." << endl;
                    enemy.setHP(enemy.getHP() - hero.getAVHit());
                    cout << "Al enemigo le queda: " << enemy.getHP() << " HP" << endl;
                }
                else {
                    cout << "No hay ataque valido" << endl;
                    continue;
                }

                if (enemy.getHP() <= 0) {
                    cout << "Has derrotado al Enemigo." << endl;
                    break;
                }

                cout << "Es el turno del enemigo!" << endl;
                enemy.setHP(enemy.getHP() - hero.getAVSword());
                hero.setHP(hero.getHP() - enemy.getAVSword());
                cout << "Al heroe le queda: " << hero.getHP() << " HP" << endl;
            }

            if (hero.getHP() <= 0) {
                cout << "El heroe ha sido derrotado por el enemigo." << endl;
            }
            if (enemy.getHP() <= 0 && hero.getHP() > 0) {
                cout << "" << endl;
                cout << "" << endl;
                cout << "--------- FASE FINAL! Te enfrentas al Boss---------" << endl;
                cout << "" << endl;
                cout << "" << endl;

                while (finalBoss.getHP() > 0 && hero.getHP() > 0) {
                    cout << "Elige un ataque (golpe/espada): ";
                    cin >> ataque;
                    if (ataque == "espada") {
                        cout << "Has atacado con espada." << endl;
                        finalBoss.setHP(finalBoss.getHP() - hero.getAVSword());
                        cout << "Al Boss le queda: " << finalBoss.getHP() << " HP" << endl;
                    }
                    else if (ataque == "golpe") {
                        cout << "Has atacado con golpe." << endl;
                        finalBoss.setHP(finalBoss.getHP() - hero.getAVHit());
                        cout << "Al Boss le queda: " << finalBoss.getHP() << " HP" << endl;
                    }
                    else {
                        cout << "No hay ataque valido" << endl;
                        continue;
                    }

                    if (finalBoss.getHP() <= 0) {
                        cout << "Has derrotado al Boss. Has ganado el juego!" << endl;
                        break;
                    }

                    cout << "Es el turno del Boss!" << endl;
                    hero.setHP(hero.getHP() - finalBoss.getAVSword());
                    finalBoss.setHP(finalBoss.getHP() - hero.getAVSword());
                    cout << "Al heroe le queda: " << hero.getHP() << " HP" << endl;
                }

                if (hero.getHP() <= 0) {
                    cout << "El heroe ha sido derrotado por el Boss." << endl;
                }
            }
        }
        else if (jugador == "Enemy") {
            cout << "Player: " << enemy.getName() << endl;
            cout << "HitPoint: " << enemy.getHP() << endl;
            cout << " --------!EMPIEZA LA PARTIDA!-------- " << endl;

            while (enemy.getHP() > 0 && hero.getHP() > 0) {
                cout << "Elige un ataque (golpe/espada): ";
                cin >> ataque;
                if (ataque == "espada") {
                    cout << "El enemigo ha atacado con espada." << endl;
                    hero.setHP(hero.getHP() - enemy.getAVSword());
                    cout << "Al heroe le queda: " << hero.getHP() << " HP" << endl;
                }
                else if (ataque == "golpe") {
                    cout << "El enemigo ha atacado con golpe." << endl;
                    hero.setHP(hero.getHP() - enemy.getAVHit());
                    cout << "Al heroe le queda: " << hero.getHP() << " HP" << endl;
                }
                else {
                    cout << "No hay ataque valido" << endl;
                    continue;
                }

                if (hero.getHP() <= 0) {
                    cout << "El heroe ha sido derrotado por el enemigo." << endl;
                    break;
                }

                cout << "¡Es el turno del heroe!" << endl;
                hero.setHP(hero.getHP() - enemy.getAVSword());
                enemy.setHP(enemy.getHP() - hero.getAVSword());
                cout << "Al enemigo le queda: " << enemy.getHP() << " HP" << endl;
            }

            if (enemy.getHP() <= 0) {
                cout << "Has derrotado al enemigo." << endl;
            }
        }
        else {
            cout << "Jugador no valido. Elige entre 'Hero' o 'Enemy'." << endl;
        }

        cout << "Quieres jugar otra vez (S/N): ";
        cin >> partida;
    }

    return 0;
}
