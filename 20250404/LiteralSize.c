#include <stdio.h>
int main5() {

	printf("literal int size : %d\n", sizeof(7777777777777));
	printf("literal int size : %d\n", sizeof(7.14));
	printf("literal int size : %d\n", sizeof('A'));

	float num1 = 6.789;
	float num2 = 3.24 + 5.12;

	const int MAX = 100;
	const double PI = 3.1415;

	int num3 = 129;
	char ch = num3;
	printf("%d\n", ch);

	return 0;
}