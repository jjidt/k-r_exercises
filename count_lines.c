#include <stdio.h>

/* count lines in input */

int main() {
	int c, new_line;

	new_line = 0;

	while ((c = getchar()) != EOF) {
		if (c == '\n') {
			new_line++;
		}
	}
	printf("%d\n", new_line);
}