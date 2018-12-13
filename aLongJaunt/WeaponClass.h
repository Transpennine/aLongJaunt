#pragma once

#include <iostream>

using namespace std;

class WeaponClass {
private:
	string name;
	int type;
	int damage;
public:
//accessor function prototypes
	string getName();	//returns the name of the weapon
	int getType();		//returns the type of the weapon
	int getDamage();	//returns the damage value of the weapon
//mutator function prototypes
	WeaponClass(string, int, int);	//create the weapon with stats specified in the parameter
	void setName(string);	//sets the name of the weapon
	void setType(int);		//sets the type of the weapon
	void setDamage(int);	//sets the damage value of the weapon
	virtual ~WeaponClass() = default;			//destructor
};

