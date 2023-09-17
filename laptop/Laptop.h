#pragma once
#include "CPU.h"
#include "SSD.h"
#include "RAM.h"
#include "GPU.h"
using namespace std;

class Laptop
{
private:
	char* name;
	char* color;
	int year;
	double price;
	CPU cpu;
	SSD ssd;
	GPU gpu;
	RAM ram;
public:
	static double count;
	Laptop();
	Laptop(const char* n, const char* c, int y, double pr,
		const char* cpuName, const char* cpuSpeed, int cpuYear, double cpuPrice,
		const char* ssdName, const char* ssdSpeed, int ssdYear, double ssdPrice,
		const char* gpuName, const char* gpuSpeed, int gpuYear, double gpuPrice,
		const char* ramName, const char* ramSpeed, int ramYear, double ramPrice);
	Laptop(const Laptop& obj);
	~Laptop();

	void Print();
	double CalculateAll() const;
};