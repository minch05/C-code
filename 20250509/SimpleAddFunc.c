#include<stdio.h>
int main() {
	int result;

	result = add(3 , 4);
	print("µ¡¼À °á°ú1: %d\n", result);

	result = 5 + 8;
	printf("µ¡¼À°á°ú2: %d\n", result);

	return 0;
}

int add(int num1, int num2) {
	return  num1 + num2;
}