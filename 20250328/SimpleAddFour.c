#include <stdio.h>
int main9() {

	int result;
	int num1, num2, num3;

	printf("세 개의 정수 입력 : ");
	scanf_s("%d %d %d", &num1, &num2, &num3);

	result = num1 + num2 + num3;
	printf("%d + %d + %d = %d", num1, num2, num3, result);

	return 0;
}