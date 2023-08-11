#include <iostream>


int SimpleFunc(int a = 10)
{
	return a + 1;
}

/* 오버로딩의 문제가 있으므로 삭제 되어야 한다.
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