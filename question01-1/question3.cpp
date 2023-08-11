#include <iostream>

// 숫자를 하나 입력받아 해당 숫자의 구구단을 출력
int main3(void)
{
	int num;
	std::cout << "구구단 숫자: ";
	std::cin >> num;

	for (int i = 1; i < 10; i++) {
		std::cout << num << " * " << i << " = " << num * i<< std::endl;
	}

	return 0;
}