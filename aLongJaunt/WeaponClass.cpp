#include "WeaponClass.h"

//accessor function definitions
string WeaponClass::getName() {
	return name;
}
int WeaponClass::getType() {
	return type;
}
int WeaponClass::getDamage() {
	return damage;
}

//mutator function prototypes
WeaponClass::WeaponClass(string newName, int newType, int newDamage) {
	setName(newName);
	setType(newType);
	setDamage(newDamage);
}
void WeaponClass::setName(string newName) {
	name = newName;
}
void WeaponClass::setType(int newType) {
	try {
		if (newType >= 0 && newType <= 3) {
			type = newType;
		}
		else {
			throw invalid_argument("Invalid argument selected. Type not set.");
		}
	}
	catch (invalid_argument(e)) {
		cout << e.what() << endl;
	}
}
void WeaponClass::setDamage(int newDamage) {
	try {
		if (newDamage >= 0) {
			damage = newDamage;
		}
		else {
			throw invalid_argument("Damage value cannot be negative. Damage not set.");
		}
	}
	catch (invalid_argument(e)) {
		cout << e.what() << endl;
	}
}

