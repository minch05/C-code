#include <stdio.h>
int main3() {

	int cur = 2;
	int is = 0;

	while (cur < 10) {
		is = 1;
		while (is < 10) {
			printf("%d x %d = %d \n", cur, is, cur * is);
			is++;
		}
		printf("--------------\n");
		cur++;
	}

	return 0;
}