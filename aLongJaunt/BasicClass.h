//this class contains basic private members used in all classes of the game as well as setters and getters for those values
#pragma once
#include <string>
#include <iostream>

using namespace std;

class BasicClass {
private:
	string name;	//name of the creature
	int health;			//amount of health	(0-100)
	int charm;			//amount of charm	(0-100)
	int strength;		//amount of strength (0-100)
	int magic;			//amount of magic (0-100)
	int speed;			//amount of speed (0-100)
public:
	//accessor function prototypes
	string getName();	//returns the name value
	int getHealth();	//returns the current health value
	int getCharm();		//returns the charm value
	int getStrength();	//returns the strength value
	int getMagic();		//returns the magic value
	int getSpeed();		//returns the speed value
	string getInfo();	//function returns the name of the object and its stats
	
	//mutator function prototypes
	BasicClass(string, int, int, int, int);	//create the creature with set name, health, charm, strength, magic, and speed values
	~BasicClass() = default;	//default drstructor for BasicClass
	void setName(string);	//change the name value
	void setHealth(int);	//change the health value
	void setCharm(int);		//change the charm value
	void setStrength(int);	//change the strength value
	void setMagic(int);		//change the magic value
	void setSpeed(int);		//change the speed value
};
