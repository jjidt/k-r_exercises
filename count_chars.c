#include <stdio.h>

/* count characters in file; */

int main() {
	double count;

	for(count = 0; getchar() != EOF; count++)
		;
	printf("%.0f\n", count);
	return 0;
}