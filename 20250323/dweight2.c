#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main(void) {
	int width;
	int height;
	int length;
	int volume;
	int weight;

	printf("Enter height of box: \n");
	scanf("%d", &height);
	printf("Enter width of box: \n");
	scanf("%d", &width);
	printf("Enter length of box: \n");
	scanf("%d", &length);

	//volume = width * height * length;
	volume = multiply(height, length, width);
	weight = (volume + 165) / 166;

	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", weight);

	return 0;
}

static int multiply(int a, int b, int c) {
	int volume = a * b * c;
	return volume;
}