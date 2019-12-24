// practice.cpp
//John T Parkhurst
//12/23/19

#include "pch.h"
#include <iostream>
#include <string>
//Parent Class
class Person {
public:
	Person();
	~Person();
	void setName();
	void setAge();
	void setColor();
	void setBirthday();
	std::string getName();
	int getAge();
	std::string getColor();
	std::string getBirthday();
private:
	// Variables
	std::string name;
	int age;
	std::string color;
	std::string birthday;
};
//Default Constructor
Person::Person() {
	name = "";
	age = 0;
	color = "black";
	birthday = "January";
}
//Destructor
Person::~Person() {
	//delete can be used for deleting arrays or pointers
}
	//METHODS
	//Sets the name
void Person::setName() {
	std::cout << "Enter the Name\n";
	std::getline(std::cin, name);
	return;
}
	//Sets The Age
void Person::setAge() {
	std::cout << "Enter Age\n";
	std::cin >> age;
	return;
}
	//sets the color
void Person::setColor() {
	std::cout << "Enter the color\n";
	std::cin >> color;
	return;
}
	//sets the birthday
void Person::setBirthday() {
	std::cout << "Enter the Birthday Month\n";
	std::cin >> birthday;
	return;
}
	//returns the name
std::string Person::getName() {
	return name;
}
	//returns the age
int Person::getAge() {
	return age;
}
	//returns the color
std::string Person::getColor() {
	return color;
}
	//returns the birthday
std::string Person::getBirthday() {
	return birthday;
}
//Child Class
class Student :public Person {
	//We have all person functions
public:
	Student();
	~Student();
	double gpa;
	std::string major;
	//0 Freshman-3 Senior
	int year;
	int studentID;
private:
	int getYear();
	void setYear();
	int getID();
	void setID();
};
//Constructor
Student::Student() {
	gpa = 0;
	major = "Undeclared";
	year = 0;
	studentID = 0001;
}
//Destructor
Student::~Student() {
	//delete can be used for deleting arrays or pointers
}
//gets students year
int Student::getYear() {
	return year;
}
//get the students id
int Student::getID() {
	return studentID;
}
//set the students year
void Student::setYear() {
	std::cout << "Enter the Current Year 0 Freshman-3 Senior\n";
	std::cin >> year;
	return;
}
//sets the student ID
void Student::setID() {
	std::cout << "Enter the Student ID: \n";
	std::cin >> studentID;
	return;
}
//Child Class
class Employee :public Person {
public:
	Employee();
	~Employee();
	//Gets Salary
	int getSalary();
	//Sets Salary
	void setSalary();
	//Gets Job Title
	std::string getJob();
	//Sets Job Title
	void setJob();
	//Gets the years employeed
	int getYears();
	//sets the years employeed
	void setYears();
private:
	std::string jobTitle;
	int salary;
	int yearsEmployed;
};
//Constructor
Employee::Employee() {
	jobTitle = "Unemployed";
	salary = 0;
	yearsEmployed = 0;
}
//Destructor
Employee::~Employee() {
	//This is called when the instance of the object ends
}
//Gets the job title
std::string Employee::getJob() {
	return jobTitle;
}
//gets the salary
int Employee::getSalary() {
	return salary;
}
//gets the user's years employed
int Employee::getYears() {
	return yearsEmployed;
}
//sets the job title
void Employee::setJob() {
	std::cout << "Enter the Job Title: \n";
	std::cin >> jobTitle;
	return;
}
//sets the salary
void Employee::setSalary() {
	std::cout << "Enter the Salary: \n";
	std::cin >> salary;
	return;
}
//sets the year employed
void Employee::setYears() {
	std::cout << "Enter the years employed: \n";
	std::cin >> yearsEmployed;
	return;
}
//Main example
int main() {
	Person p1;
	p1.setName();
	p1.setColor();
	std::cout << p1.getName()<<"'s favorite color is "<<p1.getColor();
	Employee p2;
	p2.setName();
	p2.setSalary();
	p2.setJob();
	std::cout << p2.getName() << "job is " << p2.getJob() << " and their salary is " << p2.getSalary();
	return;
}
