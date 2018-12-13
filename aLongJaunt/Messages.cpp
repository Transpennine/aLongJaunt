#include <string>	
#include <iostream>
#include "Messages.h"
using namespace std;

string charmMessageCheck() {
	return "Try to use your charm to bypass the enemy\n";
}
string strengthMessageCheck() {
	return "Try to use your strength to bypass the enemy\n";
}
string magicMessageCheck() {
	return "Try to use your magic to bypass the enemy\n";
}
string speedMessageCheck() {
	return "Try to use your speed to bypass the enemy\n";
}

string bypassSuccess() {
	return "Bypass successful!\n";
}
string bypassFail() {
	return "Bypass failed\n";
}

const string warriorSelection() {
	return "Scroll Warrior: \nthese talanted warriors are found at birth and their skin \nis infused with magical essense of Faie - the set of moral \nrules all citizens must obey. If a scroll warrior observes \nanyone disobeying those rules, they must intervene regardless \nof whether they want to or not. \nCharm: 5\nStrength: 20\nMagic: 10\nSpeed: 15\n";
}