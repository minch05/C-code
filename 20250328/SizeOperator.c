#include <stdio.h>
int main() {
	char ch = 9;
	int inum = 1052;
	double dnum = 3.1415;

	printf("변수 ch의 크기 : %d\n", sizeof(ch));
	printf("변수 inum의 크기 : %d\n", sizeof(inum));
	printf("변수 dnum의 크기 : %d\n", sizeof(dnum));

	printf("char 의 크기 : %d\n", sizeof(char));
	printf("int 의 크기 : %d\n", sizeof(int));
	printf("long 의 크기 : %d\n", sizeof(long));
	printf("long long의 크기 : %d\n", sizeof(long long));
	printf("float 의 크기 : %d\n", sizeof(float));
	printf("double 의 크기 : %d\n", sizeof(double));

	return 0;
}
