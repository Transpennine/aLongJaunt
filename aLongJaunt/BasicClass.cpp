//implementation file for BasicClass.h
#include "BasicClass.h"
#include <string>
#include <iostream>

using namespace std;
int healthDefault = 30;
//accessor function prototypes
string BasicClass::getName() {	//prints the string value stored in "name" private member
	return name;
}
int BasicClass::getHealth() {	//returns the value stored in "health" private member
	return health;	
}
int BasicClass::getCharm() {	//returns the value stored in the "charm" private member
	return charm;	
}
int BasicClass::getStrength() {	//returns the value stored in "strength" private member
	return strength;
}
int BasicClass::getMagic() {	//returns the value stored in the "magic" private member
	return magic;
}
int BasicClass::getSpeed() {	//returns the value stored in the "speed" private member
	return speed;
}
string BasicClass::getInfo() {	//the function returns all stats of BasicClass
	return getName() + "\nHealth: " + to_string(getHealth()) + "\nCharm: "
		+ to_string(getCharm()) + "\nStrength: " + to_string(getStrength()) + "\nMagic: "
		+ to_string(getMagic()) + "\nSpeed: " + to_string(getSpeed()) + "\n";
}

//mutator function prototypes
BasicClass::BasicClass(string newName, int newCharm, int newStrength, int newMagic, int newSpeed) {
	setHealth(healthDefault);
	setName(newName);
	setCharm(newCharm);
	setStrength(newStrength);
	setMagic(newMagic);
	setSpeed(newSpeed);
}
void BasicClass::setName(string newName) {		//sets the value of "name" private variable to the string in parameter
	name = newName;
}
void BasicClass::setHealth(int newHealth) {	//sets "health" private member to the number in parameter
	health = newHealth;
}
void BasicClass::setCharm(int newCharm) {	//sets "charm" private member to the number in parameter
	charm = newCharm;
}
void BasicClass::setStrength(int newStrength) { //sets "strength" private member to the number in parameter
	strength = newStrength;
}
void BasicClass::setMagic(int newMagic) {	//sets "magic" private member to the number in parameter
	magic = newMagic;
}
void BasicClass::setSpeed(int newSpeed) {	//sets "speed" private member to the number in the parameter
	speed = newSpeed;
}