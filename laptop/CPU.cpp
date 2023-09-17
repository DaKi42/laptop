#include <iostream>
#include "CPU.h"
using namespace std;

CPU::CPU() {
	name = nullptr;
	speed = nullptr;
	year = 0;
	price = 0.0;
	cout << "Constructor by default" << endl;
}
CPU::CPU(const char* n, const char* s, int y, double pr) {
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	speed = new char[strlen(s) + 1];
	strcpy_s(speed, strlen(s) + 1, s);
	year = y;
	price = pr;
	cout << "Constructor with four parameters" << endl;
}
CPU::CPU(const CPU& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	year = obj.year; 
	price = obj.price;
}
void CPU::Print()
{
	cout << "CPU " << name << " // Speed: " << speed << " // Year: " << year << " // Price: " << price << "$ " << endl;
}
CPU::~CPU() {
	delete[] name;
	delete[] speed;
	cout << "Destructor" << endl;
}

char* CPU::GetName() const {
	return name;
}
char* CPU::GetSpeed() const {
	return speed;
}
int CPU::GetYear() const {
	return year;
}
double CPU::GetPrice() const {
	return price;
}
void CPU::SetName(char* n) {
	if (name != nullptr) {
		cout << "Deleted " << name << "name" << endl;
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void CPU::SetSpeed(char* s) {
	if (speed != nullptr) {
		cout << "Deleted " << speed << "speed" << endl;
		delete[] speed;
	}
	speed = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
}
void CPU::SetYear(int y) {
	year = y;
}
void CPU::SetPrice(double pr) {
	if (pr <= 0.0) {
		cout << "Use numbers > 0" << endl;
	}
	else {
		price = pr;
	}
}