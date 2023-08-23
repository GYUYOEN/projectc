#include <iostream>

using namespace std;

class Calculator
{
private:
	int addCount = 0;
	int divCount = 0;
	int minCount = 0;
	int mulCount = 0;
public:
	void Init();
	double Add(double num1, double num2);
	double Div(double num1, double num2);
	double Min(double num1, double num2);
	double Mul(double num1, double num2);
	void ShowOpCount();
};

void Calculator::Init()
{

};

double Calculator::Add(double num1, double num2)
{
	addCount++;
	return num1 + num2;
};

double Calculator::Div(double num1, double num2)
{
	divCount++;
	return num1 / num2;
};

double Calculator::Min(double num1, double num2)
{
	minCount++;
	return num1 - num2;
};

double Calculator::Mul(double num1, double num2) {
	mulCount++;
	return num1 * num2;
};

void Calculator::ShowOpCount()
{
	cout << "µ¡¼À: " << addCount;
	cout << " »¬¼À: " << minCount;
	cout << " °ö¼À: " << mulCount;
	cout << " ³ª´°¼À: " << divCount;
};

int main1(void)
{
	Calculator cal;
	//cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.7, 1.2) << endl;
	cal.ShowOpCount();
	return 0;
}