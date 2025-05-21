#include <stdio.h>
int main2() {

	int dan = 0, num = 1;

	printf("¸î ´Ü?");
	scanf_s("%d", &dan);

	while (num < 10) {
		printf("%d x %d = %d\n", dan, num, dan * num);
		num++;
	}

	return 0;
}