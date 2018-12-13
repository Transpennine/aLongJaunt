#pragma once
#include <map>
#include "BasicClass.h"
class EnemyClass : public BasicClass { 
private:
	enum checkStats {Charm, Strength, Magic, Speed};
	map <checkStats, string> statMap = { {Charm, "Charm"},
	{Strength, "Strength"},
	{Magic, "Magic"},
	{Speed, "Speed"} };
	map <checkStats, string>::iterator mapIT;
	bool alive;
	int check;			//holds an int that determines which stat needs checked
	bool charmCheck;	//true if charm needs checked to bypass this enemy
	bool strengthCheck; //true if strength needs checked to bypass this enemy
	bool magicCheck;	//true if magic needs checked to bypass this enemy
	bool speedCheck;	//true if speed needs checked t bypass this enemy
	int damage;			//holds the amount of damage the enemy deals every turn
	string checkMessage;//holds the message that tells the character what stat is needed to pass the enemy
	string checkFailMessage;	//holds the message that tells the character that the check was not successfull
	string passMessage;	//message that appears if the character has enough to bypass the enemy
public:
	//accessor functions prototypes
	void checkHealth();	//checks health and changes "alive" if at or below 0
	//mutator functions prototypes
	void setDamage(int newDamage);	//sets the damage of the enemy
	int attack();		//outputs the attach value
	void setMessages();	//sets the messages for the enemy
	EnemyClass(string& newName, int& newCharm, int& newStrength, int& newMagic, int& newSpeed, const int check, int newDamage);	//constructor will set basic members and stat checks
	void setStatCheck(int);	//changes the required stat to be checked
	~EnemyClass() = default;
};

