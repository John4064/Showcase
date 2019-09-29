// Elegant.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

class player {
public:
	double strength = 3.0;
	double wisdom = 4.0;
	double charisma = 3.0;
	int score;

};
class arena {
public:
	int sBuff = 3;
	int wBuff = -2;
	int cBuff = 0;
	int winner;
	std::string name = "Death Row";
	int turn(player ply1, player ply2, int choice) {
		std::string temp = "";
		switch (choice) {
		case 1://set the string for this to select said variable
			temp = "strength";
			break;
		case 2:
			temp = "wisdom";
			break;
		case 3:
			temp = "charisma";
			break;

		}

		//set string where strength is 
		if (ply1.temp > ply2.temp) {
			ply1.score++;
		}
		else if (ply2.strength > ply1.strength) {
			ply2.score++;
		}
		else {
			ply1.score++;
			ply2.score++;
		}
	}
	int battle(player ply1, player ply2) {
		ply1.strength = ply1.strength + sBuff;
		ply2.strength = ply2.strength + sBuff;
		ply1.charisma = ply1.charisma + cBuff;
		ply2.charisma = ply2.charisma + cBuff;
		ply1.wisdom = ply1.wisdom + wBuff;
		ply2.wisdom = ply2.wisdom = wBuff;
		//convert check value to a method that takes input of variable and players
		turn(ply1, ply2, 1);
		turn(ply1, ply2, 2);
		turn(ply1, ply2, 3);
		//0 for ply1 1 for ply 2
		return winner;
	}
};
int battleStar() {//Not functioning just place holder for my coding atm do not execute this
	player alpha;
	player beta;
	int a, b, c;
	std::cout << "Between 1-10 you have 10 points between the three skills";
	std::cout << "What would Alpha like his Strength, Wisdom, and Charisma to be: ";
	std::cin >> a >> b >> c;
	alpha.strength = a;
	alpha.wisdom = b;
	alpha.charisma = c;
	std::cout << "What would Beta like his Strength, Wisdom, and Charisma to be: ";
	std::cin >> a >> b >> c;
	beta.strength = a;
	beta.wisdom = b;
	beta.charisma = c;
	return 0;
}
int main()
{
	player alpha;
	player beta;
	beta.strength = 6;
	beta.charisma = 2;
	beta.wisdom = 2;
	arena death;
	death.battle(alpha, beta);
	return 0;
}
