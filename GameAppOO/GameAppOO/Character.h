#pragma once
#include <iostream>
using namespace std;

class Character
{
// ATRIBUTOS 
private:
	string name;
	int HP_character;
	int AV_character_sword;
	int AV_character_hit;

public:
	// CONSTRCTORES
	Character();


	Character(string name, int HP_character, int AV_character_sword, int AV_character_hit);


	//GETTERS
	string getName();
	int getHP();
	int getAVSword();
	int getAVHit();


	// SETTERS
	void setName(string name);
	void setHP(int HP_character);
	void setAVSword(int AV_character_sword);
	void setAVHit(int AV_character_hit);


	// METODOS PROPIOS
	string getStatus();

};

