#include <iostream>

/*
헤더파일 : main 함수를 제외한 나머지 두 함수의 선언을 삽입
소스파일1 : main 함수를 제외한 나머지 두 함수의 정의를 삽입
소스파일2 : main 함수만 삽입
*/

// 헤더파일
namespace Ex1
{
	void SimpleFunc(void);
}

// 헤더파일
namespace Ex2
{
	void SimpleFunc(void);
}

//소스파일1
int main(void)
{
	Ex1::SimpleFunc();
	Ex2::SimpleFunc();
}

// 소스파일2
void Ex1::SimpleFunc(void)
{
	std::cout << "Ex1" << std::endl;
}

// 소스파일2
void Ex2::SimpleFunc(void)
{
	std::cout << "Ex2" << std::endl;
}
