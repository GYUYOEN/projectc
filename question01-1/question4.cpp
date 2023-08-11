#include <iostream>

/*
급여 계산
- 매달 50만원 기본급여와 물품 판매 가격의 12 % 에 해당하는 돈 지급
- 급여 계산은 -1이 입력될때까지 계속 진행
*/ 
int main(void)
{
	while (true)
	{
		int num;

		std::cout << "판매 금액을 만원 단위로 입력(-1 to end): ";
		std::cin >> num;

		if (num == -1) {
			break;
		}

		std::cout << "이번 달 급여: " << 50 + num * 0.12 << "만원" << std::endl;
	}

	std::cout << "프로그램을 종료합니다.";
	return 0;
}