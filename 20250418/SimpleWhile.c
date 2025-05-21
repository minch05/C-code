#include <stdio.h>
int main1() {

	int num = 0;
	
	while (num < 5 ) { // 이렇게 적어라
		printf("hello world! %d \n", num);
		num++;
	}

	num = 0;
	while (num < 5)
		printf("hello world! %d \n", num++);
	
	num = 0;
	while (num < 5) {
		printf("hello world! %d \n", num),num++;
	}

	return 0;
}