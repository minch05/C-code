#include <stdio.h>
int main() {

	float num1;
	double num2;
	long double num3;

	printf("�Ǽ� �Է�1(eǥ�������) : ");
	scanf_s("%f", &num1);
	printf("�Էµ� �Ǽ� %f\n", num1);

	printf("�Ǽ� �Է�2(eǥ�������) : ");
	scanf_s("%lf", &num2);
	printf("�Էµ� �Ǽ� %f\n", num2);

	printf("�Ǽ� �Է�3(eǥ�������) : ");
	scanf_s("%LF", &num3);
	printf("�Էµ� �Ǽ� %LF\n", num3);

	return 0;
}