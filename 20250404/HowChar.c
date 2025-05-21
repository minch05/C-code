#include <stdio.h>
int main() {
	char ch1 = 'A', ch2 = 65;
	int ch3 = 'Z', ch4 = 90;

	printf("%d %d\n", sizeof(ch1), ch1);
	printf("%c %d\n", ch2, ch2);
	printf("%d %d\n", sizeof(ch3), ch3);
	printf("%c %d\n", ch4, ch4);

	return 0;
}