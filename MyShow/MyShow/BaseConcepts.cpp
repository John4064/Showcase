//John parkhurst
//Just a basic display of some skills
#include "pch.h"
#include <iostream>
//using namespace std;
int input() {
	//Sample input value
	//Declare the n before hand
	int n;
	std::cout << "Enter a Number Please: ";
	std::cin >> n;
	//cout << n;
	return n;
}
int exFor() {
	//Example of a for loop
	for (int x = 0; x < 9; x++) {
		std::cout << x << "\n";
	}
	return 0;
}
int myIf(void) {//to make this work define the return value in the input
	int myVar = input();
	if (myVar > 9) {
		std::cout << "Your Value is over 9";
	}else if (myVar == 3) {
		std::cout << "You Value is 3";
	}else {
		std::cout << "Fred";
	}
	return 0;
}
double exec(void) {
	//problem from textbook
	double one = 1.000;
	double two = 1.414;
	double three = 1.732;
	double four = 2.000;
	double five = 2.236;
	std::cout << "N\t"<<"Square Root\n";
	std::cout << "1\t" << one<< "\n";
	std::cout << "2\t" << two<< "\n";
	std::cout << "3\t" << three<< "\n";
	std::cout << "4\t" << four<< "\n";
	std::cout << "5\t" << five<< "\n";


	return 0;
}
//Sample of a class and how to call such a value
class jared {
	public:
		int albino = 6000;
	private:
		int doug = 400;
	int alfred(void) {
		std::cout << doug;
		return 0;
	}
};
int txt(void){
	int firstChoice = 1;//Switch is just an alternative to a long else if blocks
	switch (firstChoice + 1)
	{
	case 1:
		std::cout << "Roast beef\n";
		break;
	case 2:
		std::cout << "Roast worms\n";
		break;
	case 3:
		std::cout << "Chocolate ice cream\n";
		break;
	case 4:
		std::cout << "Onion ice cream\n";
		break;
	default:
		std::cout << "Bon appetit!\n";
	}
	return 0;
}
int main(void)
{
	//Example output
	//std::cout << "Hello World!\n";
	//exFor();
	//input();
	//myIf();
	//How to declare an object of a class
	//jared myDra;
	//std::cout << myDra.albino;//How to call a value defined publically
	//exec();
	//txt();
	return 0;
}