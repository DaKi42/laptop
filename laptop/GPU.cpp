#include <iostream>
#include "GPU.h"
using namespace std;

GPU::GPU() {
	name = nullptr;
	speed = nullptr;
	year = 0;
	price = 0.0;
	cout << "Constructor by default" << endl;
}
GPU::GPU(const char* n, const char* s, int y, double pr) {
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	speed = new char[strlen(s) + 1];
	strcpy_s(speed, strlen(s) + 1, s);
	year = y;
	price = pr;
	cout << "Constructor with four parameters" << endl; 
}
GPU::GPU(const GPU& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	speed = new char[strlen(obj.speed) + 1];
	strcpy_s(speed, strlen(obj.speed) + 1, obj.speed);
	year = obj.year;
	price = obj.price;
}
void GPU::Print()
{
	cout << "GPU " << name << "// Speed: " << speed << " // Year: " << year << " // Price: " << price << "$ " << endl;
}
GPU::~GPU() {
	delete[] name;
	delete[] speed;
	cout << "Destructor" << endl;
}

char* GPU::GetName() const {
	return name;
}
char* GPU::GetSpeed() const {
	return speed;
}
int GPU::GetYear() const {
	return year;
}
double GPU::GetPrice() const {
	return price;
}
void GPU::SetName(char* n) {
	if (name != nullptr) {
		cout << "Deleted " << name << "name" << endl;
		delete[] name;
	}
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
}
void GPU::SetSpeed(char* s) {
	if (speed != nullptr) {
		cout << "Deleted " << speed << "speed" << endl;
		delete[] speed;
	}
	speed = new char[strlen(s) + 1];
	strcpy_s(name, strlen(s) + 1, s);
}
void GPU::SetYear(int y) {
	year = y;
}
void GPU::SetPrice(double pr) {
	if (pr <= 0.0) {
		cout << "Use numbers > 0" << endl;
	}
	else {
		price = pr;
	}
}