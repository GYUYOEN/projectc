#include <iostream>

int main(void)
{
	while (true)
	{
		int num;

		std::cout << "�Ǹ� �ݾ��� ���� ������ �Է�(-1 to end): ";
		std::cin >> num;

		if (num == -1) {
			break;
		}

		std::cout << "�̹� �� �޿�: " << 50 + num * 0.12 << "����" << std::endl;
	}

	std::cout << "���α׷��� �����մϴ�.";
	return 0;
}