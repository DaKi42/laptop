#include <iostream>
#include "SSD.h"
using namespace std;

SSD::SSD() {
	name = nullptr;
	speed = nullptr;
	year = 0;
	price = 0.0;
	cout << "Constructor by default" << endl;
}
SSD::SSD(const char* n, const char* s, int y, double pr) {
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	speed = new char[strlen(s) + 1];
	strcpy_s(speed, strlen(s) + 1, s);
	year = y;
	price = pr;
	cout << "Constructor with four parameters" << endl;
}
SSD::SSD(const SSD& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	year = obj.year;
	price = obj.price;
}
void SSD::Print()
{
	cout << "SSD " << name << " // Speed: " << speed << " // Year: " << year << " // Price: " << price << "$ " << endl;
}
SSD::~SSD() {
	delete[] name;
	delete[] speed;
	cout << "Destructor" << endl;
}

char* SSD::GetName() const {
	return name;
}
char* SSD::GetSpeed() const {
	return speed;
}
int SSD::GetYear() const {
	return year;
}
double SSD::GetPrice() const {
	return price;
}
void SSD::SetName(char* n) {
	if (name != nullptr) {
		cout << "Deleted " << name << "name" << endl;
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void SSD::SetSpeed(char* s) {
	if (speed != nullptr) {
		cout << "Deleted " << speed << "speed" << endl;
		delete[] speed;
	}
	speed = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
}
void SSD::SetYear(int y) {
	year = y;
}
void SSD::SetPrice(double pr) {
	if (pr <= 0.0) {
		cout << "Use numbers > 0" << endl;
	}
	else {
		price = pr;
	}
}