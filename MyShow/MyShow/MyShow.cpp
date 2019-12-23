// practice.cpp
//John T Parkhurst
//12/23/19

#include "pch.h"
#include <iostream>
#include <string>
//Parent Class
class Person {
public:
	//Public Variables
	std::string name;
	int age;
	std::string color;
	std::string birthday;
	//METHODS
	//Sets the name
	void setName() {
		std::cout << "Enter the Name\n";
		std::getline(std::cin, name);
		return;
	}
	//Sets The Age
	void setAge() {
		std::cout << "Enter Age\n";
		std::cin >> age;
		return;
	}
	//sets the color
	void setColor() {
		std::cout << "Enter the color\n";
		std::cin >> color;
		return;
	}
	//sets the birthday
	void setBirthday() {
		std::cout << "Enter the Birthday Month\n";
		std::cin >> birthday;
		return;
	}
	//returns the name
	std::string getName() {
		return name;
	}
	//returns the age
	int getAge() {
		return age;
	}
	//returns the color
	std::string getColor() {
		return color;
	}
	//returns the birthday
	std::string getBirthday() {
		return birthday;
	}
};
//Child Class
class Student :public Person {
	//We have all person functions
public:
	int gpa;
	std::string major;
	int year;
	int studentID;
};
//Child Class
class Employee :public Person {
public:
	std::string jobTitle;
	int salary;
	int yearsEmployed;
};
int main() {
	Person p1;
	p1.setName();
	p1.age = 19;
	p1.color = "Green";
	p1.birthday = "November";
	std::cout << p1.getColor();
}
