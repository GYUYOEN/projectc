#include <iostream>

using namespace std;

int main(void)
{
	const int num = 12;

	const int *ptr = &num;

	const int *(&ref) = ptr;

	cout << "num : " << num << " " << &num << endl;
	cout << "ptr : " << ptr << " " << *ptr << endl;
	cout << "ref : " << ref << " " << &ref << " " << *ref << " " << *(&ref) << endl;
}