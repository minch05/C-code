#include<stdio.h>
int main() {
	int result;

	result = add(3 , 4);
	print("���� ���1: %d\n", result);

	result = 5 + 8;
	printf("�������2: %d\n", result);

	return 0;
}

int add(int num1, int num2) {
	return  num1 + num2;
}