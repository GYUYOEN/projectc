#include <iostream>

// 총 5개의 정수를 입력 받아, 그 합을 출력
int main1(void)
{
	int val1, val2, val3, val4, val5;
	int result = 0;

	std::cout << "1번째 정수 입력: ";
	std::cin >> val1;
	std::cout << "2번째 정수 입력: ";
	std::cin >> val2;
	std::cout << "3번째 정수 입력: ";
	std::cin >> val3;
	std::cout << "4번째 정수 입력: ";
	std::cin >> val4;
	std::cout << "5번째 정수 입력: ";
	std::cin >> val5;

	result = val1 + val2 + val3 + val4 + val5;

	std::cout << "합계: " << result;
	return 0;
}