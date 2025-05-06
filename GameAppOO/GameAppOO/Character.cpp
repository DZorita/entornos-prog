#include "Character.h"
#include <iostream>
#include <string>
using namespace std;

Character::Character()
{
	name = " ";
	HP_character = 0;
	AV_character_sword = 0;
	AV_character_hit = 0;
}

Character::Character(string iName, int iHP_character, int iAV_character_sword, int iAV_character_hit)
{
	name = iName;
	HP_character = iHP_character;
	AV_character_sword = iAV_character_sword;
	AV_character_hit = iAV_character_hit;
}

string Character::getName()
{
	return name;
}

int Character::getHP()
{
	return HP_character;
}

int Character::getAVSword()
{
	return AV_character_sword;
}

int Character::getAVHit()
{
	return AV_character_hit;
}

void Character::setName(string iName)
{
	name = iName;
}

void Character::setHP(int iHP_character)
{
	HP_character = iHP_character;
}

void Character::setAVSword(int iAV_character_sword)
{
	AV_character_sword = iAV_character_sword;
}

void Character::setAVHit(int iAV_character_hit)
{
	AV_character_hit = iAV_character_hit;
}


// METODOS PROPIOS
string Character::getStatus()
{
	return ("Character Status:\n  Name: " + name + "\n  HP:" + to_string(HP_character) + "\n  Golpe:" + to_string(AV_character_hit) + "\n  Espada:" + to_string(AV_character_sword));
}
