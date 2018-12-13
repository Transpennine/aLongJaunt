//implementation file for "CharacterClass.h"
#include "BasicClass.h"
#include "CharacterClass.h"
#include <iostream>

using namespace std;

int weaponMod = 10;

//accessor functions definitions
int CharacterClass::getDamage() {
	return damage;
}
bool CharacterClass::checkHealth() {	//checks health and changes the "alive" bool if it falls at or below 0
	if (getHealth() > 0) {
		return true;
	}
	if (getHealth() <= 0) {
		return false;
	}
}
string CharacterClass::getInfo() {	//the derived funtion checks if the character is alive and, if so, returns its information 
	if (alive == true) {
		return BasicClass::getInfo();
	}
	else {	//if the player's health is 
		return "The player is dead\n";
	}
}

//mutator functions definitions
CharacterClass::CharacterClass(string& newName, int& newCharm, int& newStrength, int& newMagic, int& newSpeed, int newType) : BasicClass(newName, newCharm, newStrength, newMagic, newSpeed)  {	//constructor creates the player character based on BasicClass
	damage = 5;
	alive = true;
	attack = true;
	ifWeapon = false;
	weaponDamage = 0;
	type = newType;
	setCharacterDamage();
	
}
void CharacterClass::decreaseHealth(int byThis) {	//the function changes the amount of health the character has by the amount in parameter and checks if the character is still alive
	int currentHealth = getHealth();
	currentHealth -= byThis;
	setHealth(currentHealth);
	if (getHealth() > 0) { //if the health is above 0, the character is still alive
		alive = true;
	}
	else {
		alive = false; //if health is 0 or below, the character is dead
	}
}
void CharacterClass::increaseHealth(int byThis) {
	int currentHealth = getHealth();
	currentHealth += byThis;
	setHealth(currentHealth);
}
void CharacterClass::setWeaponDamage() {	//changing damage based on the weapon type
	try {
		if (weaponDamageMod == 0) {
			damage = damage + ((getCharm()*weaponDamage) / weaponMod);
		}
		else if (weaponDamageMod == 1) {
			damage = damage + ((getStrength()*weaponDamage) / weaponMod);
		}
		else if (weaponDamageMod == 2) {
			damage = damage + ((getMagic()*weaponDamage) / weaponMod);
		}
		else if (weaponDamageMod == 3) {
			damage = damage + ((getSpeed()*weaponDamage) / weaponMod);
		}
		else {
			throw invalid_argument("Damage modificator not set");
		}
	}
	catch (invalid_argument(e)) {
		cout << e.what() << endl;
	}
}
void CharacterClass::setWeapon(int weaponType, int weaponDmg) {
	ifWeapon = true;
	weaponDamage = weaponDmg;
	damage += weaponDamage;
	try {
		if (weaponType == 0) {
			weaponDamageMod = 0;
		}
		else if (weaponType == 1) {
			weaponDamageMod = 1;
		}
		else if (weaponType == 2) {
			weaponDamageMod = 2;
		}
		else if (weaponType == 3) {
			weaponDamageMod = 3;
		}
	}
	catch (invalid_argument(e)) {
		cout << e.what() << endl;
	}
	setWeaponDamage();
}
void CharacterClass::setCharacterDamage() {
	try {
		if (type == 0) {
			damage += getCharm() / 10;
		}
		else if (type == 1) {
			damage += getStrength() / 10;
		}
		else if (type == 2) {
			damage += getMagic() / 10;
		}
		else if (type == 3) {
			damage += getSpeed() / 10;
		}
		else {
			throw invalid_argument("Character type is invalid");
		}
	}
	catch (invalid_argument(e)) {
		cout << e.what() << endl;
	}

}

//production function definition
string CharacterClass::charSays(string newMessage) {
	return	"\n" + getName() + " says, \"" + newMessage + "\"\n";
}
int CharacterClass::attackOut() {
	int totalDamage = getDamage();
	if (ifWeapon == true) {
		totalDamage += weaponDamage;
	}
	return totalDamage;
}
/*
CharacterClass::CharacterClass(strin& name, int type) {
	if(type == 1) {
	BasicClass::BasicClass
	}
}
*/