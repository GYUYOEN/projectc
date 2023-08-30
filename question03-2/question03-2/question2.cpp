#include <iostream>
#include <cstring>

using namespace std;

class Printer
{
private:
	char c[100];
public:
	void SetString(const char* s);
	void ShowString();
};

void Printer::SetString(const char* s)
{
	strcpy(c, s);
};

void Printer::ShowString()
{
	cout << c << endl;
};

int main2(void)
{
	Printer pnt;
	pnt.SetString("Hello world!");
	pnt.ShowString();

	pnt.SetString("I love C++");
	pnt.ShowString();
	
	return 0;
}