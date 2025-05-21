#include <stdio.h>
int main(){

	double total = 0.0;
	double input = 0.0;
	int i = 0;

	for (; input >= 0.0;)
	{
		total += input;
		printf("실수입력(minus to quit) : ");
		scanf_s("%lf", input);
	}

	printf("평균: %f\n", total / (i - 1));
	return 0;
}