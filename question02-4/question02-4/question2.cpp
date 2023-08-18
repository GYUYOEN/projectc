#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main2(void)
{
	srand(time(NULL));

	for (int i = 0; i < 5; i++)
	{
		int num = rand() % 100;

		cout << num << endl;
	}

	return 0;
}