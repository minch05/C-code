#include <stdio.h>
int main1() {
	int num1 = 10;
	int num2 = (num1--) + 2; // 후위 연산자 ex)변수--,변수++ 은 ; 이끝난뒤에 연산되어 그다음 줄부터 값이 할당된다
	//;이 끝난뒤 num1에 후위연산자 -- 가 연산되어 num1은 num1 = 10 --; 로 값이 할당되어 값은 9가 되어 밑줄에 9로 출력된다
	printf("num1 : %d\n", num1);
	printf("num2 : %d\n", num2);
	return 0;
}