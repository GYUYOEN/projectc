#include <iostream>

// �̸��� ��ȭ��ȣ�� ���ڿ��� ���·� �Է¹��� ��, ���
int main2(void)
{
	char name[100], phone[100];

	std::cout << "�̸�: ";
	std::cin >> name;
	std::cout << "�ڵ���: ";
	std::cin >> phone;

	std::cout << "���� �̸��� " << name << "�̰�, ����ȣ�� " << phone << "�̴�.";

	return 0;
}