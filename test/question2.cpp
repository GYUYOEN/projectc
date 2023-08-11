#include <iostream>

// 이름과 전화번호를 문자열의 형태로 입력받은 후, 출력
int main2(void)
{
	char name[100], phone[100];

	std::cout << "이름: ";
	std::cin >> name;
	std::cout << "핸드폰: ";
	std::cin >> phone;

	std::cout << "나의 이름은 " << name << "이고, 폰번호는 " << phone << "이다.";

	return 0;
}