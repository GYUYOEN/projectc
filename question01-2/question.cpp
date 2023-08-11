#include <iostream>

// swap 함수를 오버로딩해서 구현해보기
void swap(int a, int b) {
	std::cout << a << ' ' << b << std::endl;
}

void swap(char a, char b) {
	std::cout << a << ' ' << b << std::endl;
}

void swap(double a, double b) {
	std::cout << a << ' ' << b << std::endl;
}

int main(void)
{
	int num1 = 20, num2 = 30;
	swap(num1, num2);

	char ch1 = 'A', ch2 = 'Z';
	swap(ch1, ch2);

	double dbl1 = 1.111, dbl2 = 5.555;
	swap(dbl1, dbl2);

	return 0;
}