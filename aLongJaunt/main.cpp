//Program name: aLongJaunt.cpp
//Author: Anastasia Martindale
//Date last updated: 10/18/2018
//Purpose: word-based fantasy-adventure game with elements of RPG 

#include <iostream>
#include <ctime> 
#include <cstdlib>
#include <string>
#include <vector>
#include <map>
#include <set>
#include "BasicClass.h"
#include "CharacterClass.h"
#include "EnemyClass.h"
#include "WeaponClass.h"
#include "Messages.h"

//5; 20; 10; 15
//setting int values for different stats
const int charmStat = 0;	
const int strengthStat = 1;
const int magicStat = 2;
const int speedStat = 3;

using namespace std;
vector <EnemyClass> enemyCollection();
vector <WeaponClass> weaponSet();

int main() {
	srand((unsigned int)time(NULL));
	vector <EnemyClass> enemies = enemyCollection();	//initializing the enemies in the game
	vector <WeaponClass> weapons = weaponSet();			//initiaizing randomly created enemies withing the set range
	cout << warriorSelection();
	int num = (rand() % weapons.size());
	cout << weapons.at(num).getDamage();




	return 0;
}

vector <EnemyClass> enemyCollection() {	//creating four low-level enemies and returning them in a vector
	int min = 5;
	int low = 10;
	int med = 15;
	int interm = 20;
	int high = 30;
	int boss = 40;
	vector <EnemyClass> newCollection;
	string nameOne = "Curious Squire";
	string nameTwo = "Carnivorous Squirrel";
	string nameThree = "Conjuring Seed";
	string nameFour = "Cerulean Chaos";
	EnemyClass charmEnemy(nameOne, high, med, min, interm, charmStat, min);
	newCollection.push_back(charmEnemy);
	EnemyClass strengthEnemy(nameTwo, min, interm, min, med, strengthStat, min);
	newCollection.push_back(strengthEnemy);
	EnemyClass magicEnemy(nameThree, med, min, interm, min, magicStat, min);
	newCollection.push_back(magicEnemy);
	EnemyClass speedEnemy(nameFour, min, med, min, interm, speedStat, min);
	newCollection.push_back(speedEnemy);
	return newCollection;
}
vector <WeaponClass> weaponSet() {
	vector <WeaponClass> newWeapons;
	int numOfWeapons = 4;
	string weaponName;
	for (int i = 0; i < numOfWeapons; i++) {
		weaponName = "Weapon " + to_string(i);
		WeaponClass newWeapon(weaponName, rand()%3, (rand()%10+1));
		newWeapons.push_back(newWeapon);
	}
	return newWeapons;
}