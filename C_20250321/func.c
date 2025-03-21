#include <stdio.h>

int main() {
	int num1 = 10;
	int num2 = 4;

	int result = plus(num1, num2);
	
	printf("%d", result);

	return 0;
}

int plus(int a, int b) {
	int result = a + b;
	return result;
}