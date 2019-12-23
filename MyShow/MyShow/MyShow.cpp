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
	void setName() {
		std::cout << "Enter the Name\n";
		std::getline(std::cin, name);
		return;
	}
	void setAge() {
		std::cout << "Enter Age\n";
		std::cin >> age;
		return;
	}
	void setColor() {
		std::cout << "Enter the color\n";
		std::cin >> color;
		return;
	}
	void setBirthday() {
		std::cout << "Enter the Birthday Month\n";
		std::cin >> birthday;
		return;
	}
	std::string getName() {
		return name;
	}
	int getAge() {
		return age;
	}
	std::string getColor() {
		return color;
	}
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
