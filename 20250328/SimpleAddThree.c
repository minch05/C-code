#include <stdio.h>
int main5() {

	int num1, num2;
	int result;

	printf("���� one :");
	scanf_s("d", &num1);
	printf("���� two : ");
	scanf_s("%d", &num2);

	result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);

	return 0;
}