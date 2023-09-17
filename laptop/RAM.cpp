#include <iostream>
#include "RAM.h"
using namespace std;

RAM::RAM() {
	name = nullptr;
	speed = nullptr;
	year = 0;
	price = 0.0;
	cout << "Constructor by default" << endl;
}
RAM::RAM(const char* n, const char* s, int y, double pr) {
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	speed = new char[strlen(s) + 1];
	strcpy_s(speed, strlen(s) + 1, s);
	year = y;
	price = pr;
	cout << "Constructor with four parameters" << endl;
}
RAM::RAM(const RAM& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	year = obj.year;
	price = obj.price;
}
void RAM::Print()
{
	cout << "RAM " << name << " // Speed: " << speed << " // Year: " << year << " // Price: " << price << "$ " << endl;
}
RAM::~RAM() {
	delete[] name;
	delete[] speed;
	cout << "Destructor" << endl;
}

char* RAM::GetName() const {
	return name;
}
char* RAM::GetSpeed() const {
	return speed;
}
int RAM::GetYear() const {
	return year;
}
double RAM::GetPrice() const {
	return price;
}
void RAM::SetName(char* n) {
	if (name != nullptr) {
		cout << "Deleted " << name << "name" << endl;
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void RAM::SetSpeed(char* s) {
	if (speed != nullptr) {
		cout << "Deleted " << speed << "speed" << endl;
		delete[] speed;
	}
	speed = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
}
void RAM::SetYear(int y) {
	year = y;
}
void RAM::SetPrice(double pr) {
	if (pr <= 0.0) {
		cout << "Use numbers > 0" << endl;
	}
	else {
		price = pr;
	}
}