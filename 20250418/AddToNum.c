#include <stdio.h>
int main6() {

	int total = 0;
	int num;
	printf("0���� num������ ����, num��?");
	scanf_s("%d", &num);

	for (int i = 0; i <= num; i++) {
		total += i;
	}
	printf("0���� %d������ �������: %d",num,total);
	return 0;
}