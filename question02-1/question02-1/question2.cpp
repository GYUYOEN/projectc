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
	�� ���·� ȣ���ϸ� ������ ������ �߻��ϴµ�
	�� ������ SwapByRef3 �Լ��� ���ڰ� �����ڷ� �Ǿ� �ֱ� �����̴�.
	�������� ��� ������ �ʱ�ȭ �Ǿ�� �ϱ� ������ ������ ������ �߻��Ѵ�.
	*/

	cout << "val1 : " << val1 << endl;
	cout << "val2 : " << val2 << endl;
	return 0;
}