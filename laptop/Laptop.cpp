#include <iostream>
#include "Laptop.h"
using namespace std;

Laptop::Laptop()
{
	name = nullptr;
	color = nullptr;
	year = 0;
	price = 0.0;

	CPU cpu;
	SSD ssd;
	GPU gpu;
	RAM ram;
	cout << "Constructor by default" << endl;
}
Laptop::Laptop(const char* n, const char* c, int y, double pr,
	const char* cpuName, const char* cpuSpeed, int cpuYear, double cpuPrice,
	const char* ssdName, const char* ssdSpeed, int ssdYear, double ssdPrice,
	const char* gpuName, const char* gpuSpeed, int gpuYear, double gpuPrice,
	const char* ramName, const char* ramSpeed, int ramYear, double ramPrice) :
	cpu(cpuName, cpuSpeed, cpuYear, cpuPrice),
	ssd(ssdName, ssdSpeed, ssdYear, ssdPrice),
	gpu(gpuName, gpuSpeed, gpuYear, gpuPrice),
	ram(ramName, ramSpeed, ramYear, ramPrice)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	color = new char[strlen(c) + 1];
	strcpy_s(color, strlen(c) + 1, c);
	year = y;
	price = pr;
	count++;

	cout << "Constructor with four parameters" << endl;
}
Laptop::Laptop(const Laptop& obj)
{
	name = new char[strlen(obj.name) + 1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	color = new char[strlen(obj.color) + 1];
	strcpy_s(color, strlen(obj.color) + 1, obj.color);
	year = obj.year;
	price = obj.price;

	cpu.SetName(obj.cpu.GetName());
	cpu.SetSpeed(obj.cpu.GetSpeed());
	cpu.SetYear(obj.cpu.GetYear());
	cpu.SetPrice(obj.cpu.GetPrice());

	ssd.SetName(obj.ssd.GetName());
	ssd.SetSpeed(obj.ssd.GetSpeed());
	ssd.SetPrice(obj.cpu.GetPrice());

	gpu.SetName(obj.gpu.GetName());
	gpu.SetSpeed(obj.gpu.GetSpeed());
	gpu.SetYear(obj.gpu.GetYear());
	gpu.SetPrice(obj.gpu.GetPrice());

	ram.SetName(obj.ram.GetName());
	ram.SetSpeed(obj.ram.GetSpeed());
	gpu.SetYear(obj.gpu.GetYear());
	ram.SetPrice(obj.ram.GetPrice());
}
void Laptop::Print()
{
	cout << "Name: " << name << "// Color: " << color << "// Year: " << year << "// Price: " << price << endl;
	cpu.Print();
	ssd.Print();
	gpu.Print();
	ram.Print();
}
Laptop::~Laptop()
{
	delete[] name;
	delete[] color;
	--count;
	cout << "Destructor" << endl;
}

double Laptop::CalculateAll() const 
{
	count = price + cpu.GetPrice() + ssd.GetPrice() + gpu.GetPrice() + ram.GetPrice();
	return count;
}