#include <stdio.h>

int main() {
	int character;

	while((character = getchar()) != EOF)
		printf("that is %c", character);
}