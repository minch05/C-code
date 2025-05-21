#include <stdio.h>
int main4() {

	int i = 0;
	int j = 0;
	while (i < 5) {
		j = 0;
		while (j < i) {
			printf("O");
			j++;
		}
		printf("*\n");
		i++;
	}

	return 0;
}