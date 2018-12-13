#include "EnemyClass.h"
#include "Messages.h"


void EnemyClass::checkHealth() {//checks health and changes "alive" if at or below 0
	if (getHealth() <= 0) {
		alive = false;
	}
}

EnemyClass::EnemyClass(string& newName, int& newCharm, int& newStrength, int& newMagic, int& newSpeed, int const newCheck, int newDamage) : BasicClass (newName, newCharm, newStrength, newMagic, newSpeed)	{
	check = newCheck;
	setStatCheck(check);
	setDamage(newDamage);
	setMessages();
}

void EnemyClass::setStatCheck(int newStat) {
	if (newStat == 0) {
		charmCheck = true;
	}
	else if (newStat == 1) {
		strengthCheck = true;
	}
	else if (newStat == 2) {
		magicCheck = true;
	}
	else if (newStat == 3) {
		speedCheck = true;
	}
}
void EnemyClass::setMessages() {	//setting the messages based on the trait checked
	try {
		if (charmCheck == true) {
			checkMessage = charmMessageCheck();
		}
		else if (strengthCheck == true) {
			checkMessage = strengthMessageCheck();
		}
		else if (magicCheck == true) {
			checkMessage = magicMessageCheck();
		}
		else if (speedCheck == true) {
			checkMessage = speedMessageCheck();
		}
		else {
			throw invalid_argument("Check value not set!");	//throwing exception if the check trait not set
		}
	}
	catch (invalid_argument(e)) {
		cout << e.what() << endl;
	}
	checkFailMessage = bypassFail();
	passMessage = bypassSuccess();
}
void EnemyClass::setDamage(int newDamage) {
	damage = newDamage;
}
int EnemyClass::attack() {	//returns the damage amount
	return damage;
}
