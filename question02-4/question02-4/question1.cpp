#include <iostream>
#include <cstring>

using namespace std;

int main(void) {
	char str1[20] = "Hello";
	char str2[10] = "World";

	cout << strlen(str1) << endl;
	cout << strlen(str2) << endl;

	strcat(str1, str2);

	cout << str1 << endl;

	strcpy(str1, str2);

	cout << str1 << endl;

	cout << strcmp(str1, str2) << endl;

	return 0;
}
