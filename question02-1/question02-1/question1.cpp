#include <iostream>
using namespace std;

// ���ڷ� ���޵� int�� ������ ���� 1�� ������Ű�� �Լ�
int SwapByRef1(int &ref)
{
	return ref + 1;
}

// ���ڷ� ���޵� int�� ������ ��ȣ�� �ٲٴ� �Լ�
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