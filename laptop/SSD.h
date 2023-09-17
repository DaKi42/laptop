#pragma once
class SSD
{
private:
	char* name;
	char* speed;
	int year;
	double price;
public:
	SSD();
	SSD(const char* n, const char* s, int y, double pr);
	SSD(const SSD& obj);
	~SSD();

	void Print();
	char* GetName() const;
	char* GetSpeed() const;
	int GetYear() const;
	double GetPrice() const;
	void SetName(char* n);
	void SetSpeed(char* s);
	void SetYear(int y);
	void SetPrice(double pr);
};