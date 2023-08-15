#include <iostream>

using namespace std;

// ptr1�� ptr2�� ����Ű�� ����� ���� �ٲٵ����ϴ� �Լ� ����
void SwapPointer(int* ptr1, int* ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main(void)
{
	int num1 = 5;
	int* ptr1 = &num1;
	int num2 = 10;
	int* ptr2 = &num2;

	SwapPointer(&num1, &num2);

	cout << "num1 : " << num1 << endl;
	cout << "num2 : " << num2 << endl;

	return 0;
}