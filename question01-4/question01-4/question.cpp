#include <iostream>

/*
������� : main �Լ��� ������ ������ �� �Լ��� ������ ����
�ҽ�����1 : main �Լ��� ������ ������ �� �Լ��� ���Ǹ� ����
�ҽ�����2 : main �Լ��� ����
*/

// �������
namespace Ex1
{
	void SimpleFunc(void);
}

// �������
namespace Ex2
{
	void SimpleFunc(void);
}

//�ҽ�����1
int main(void)
{
	Ex1::SimpleFunc();
	Ex2::SimpleFunc();
}

// �ҽ�����2
void Ex1::SimpleFunc(void)
{
	std::cout << "Ex1" << std::endl;
}

// �ҽ�����2
void Ex2::SimpleFunc(void)
{
	std::cout << "Ex2" << std::endl;
}
