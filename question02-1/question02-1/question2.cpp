#include <iostream>

using namespace std;

void SwapByRef3(int& ref1, int& ref2)
{
	int temp = ref1;
	ref1 = ref2;
	ref2 = temp;
}

int main2(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef3(val1, val2);
	/*
	SwapByRef3(23, 45);
	위 형태롤 호출하면 컴파일 에러가 발생하는데
	그 이유는 SwapByRef3 함수의 인자가 참조자로 되어 있기 때문이다.
	참조자의 경우 변수로 초기화 되어야 하기 때문에 컴파일 에러가 발생한다.
	*/

	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;
	return 0;
}