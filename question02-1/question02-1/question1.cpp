#include <iostream>
using namespace std;

// 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
int SwapByRef1(int &ref)
{
	return ref + 1;
}

// 인자로 전달된 int형 변수의 부호를 바꾸는 함수
int SwapByRef2(int& ref)
{
	return -(ref);
}

int main1(void) 
{
	int val = 10;
	
	cout << SwapByRef1(val) << endl;
	cout << SwapByRef2(val) << endl;

	return 1;
}