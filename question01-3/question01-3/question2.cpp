#include <iostream>


int SimpleFunc(int a = 10)
{
	return a + 1;
}

/* �����ε��� ������ �����Ƿ� ���� �Ǿ�� �Ѵ�.
int SimpleFunc(void)
{
	return 10;
}
*/

int main(void)
{
	std::cout << SimpleFunc() << std::endl;
	std::cout << SimpleFunc(5) << std::endl;
}