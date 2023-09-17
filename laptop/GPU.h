#pragma once
class GPU
{
private:
	char* name;
	char* speed;
	int year;
	double price;
public:
	GPU();
	GPU(const char* n, const char* s, int y, double pr);
	GPU(const GPU& obj);
	~GPU();

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