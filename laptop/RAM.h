#pragma once
class RAM
{
private:
	char* name;
	char* speed;
	int year;
	double price;
public:
	RAM();
	RAM(const char* n, const char* s, int y, double pr);
	RAM(const RAM& obj);
	~RAM();

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