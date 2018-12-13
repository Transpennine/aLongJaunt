#pragma once
#include "BasicClass.h"
#include <iostream>

using namespace std;

class CharacterClass : public BasicClass {
private:
	bool alive;			//this member will control health and info displays in game
	bool attack;		//this member controls if the character can attack
	bool ifWeapon;		//false when the character is created; changes to true if the character picks up a wheapon
	int health;
	int weaponDamage;	//contains the amount of damage the weapon contains
	int damage;			//contains the total ampount of damange the character can deal
	int weaponDamageMod;		//contains the number which determines the damage modifier for the player's weapon	
	int characterDamageMod;		//contains the number which determines the damage modifier for the player character
	int type;			//?? contains the type of the player character
public:
	//accessor function prototype
	bool checkHealth();			//checks health and changes the bool "alive" if health is below 0
	string getInfo();			//returns all information about the character (add damage)
	int getDamage();			//returns the damage value
								//production function prototype
	string charSays(string);	//returns the line said by the character with the name identifier
	
	//mutator function prototypes
	CharacterClass(string&newName, int& newCharm, int& newStrength, int& newMagic, int& newSpeed, int newType);		//constructor prototype takes the number of the character and all stats are assigned based on it
	~CharacterClass() = default;//default destructor
	int attackOut();				//funciton outputs the total damage done by the character
	void decreaseHealth(int);		//function decreases the health by the number in parameter
	void increaseHealth(int);		//function increases the health by the number in parameter
	void setCharacterDamage();	//function changes the damage output based on the character's primary stat
	void setWeaponDamage();			//function that changes  damage depending on the damageMod and class of the character
	void setWeapon(int, int);		//funciton that sets the weapon and changes the damage based on it
								//operator overloading function prototypes - change health of the character
	//friend ostream& operator << (ostream&, const CharacterClass&);
};
