#include <iostream>

// ���ڸ� �ϳ� �Է¹޾� �ش� ������ �������� ���
int main3(void)
{
	int num;
	std::cout << "������ ����: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++) {
		std::cout << num << " * " << i << " = " << num * i<< std::endl;
	}

	return 0;
}