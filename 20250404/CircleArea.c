#include <stdio.h>
int main0() {
	double rad;
	double area;
	printf("원의 반지름 입력 : ");
	scanf_s("%lf", &rad);

	area = rad * rad * 3.1415;
	printf("원의 넓이 : %f \n", area);
	return 0;
}