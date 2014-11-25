#include <stdio.h>

int main(){
	int fahr, cels, lower, upper, step;
	lower = 20;
	upper = 300;
	step = 20;

	for(int i = lower; i < upper; i += step) {
		fahr = i;
		cels = (fahr -  32)  *  5/9;
		printf("fahrenheit %i, celsius %i \n", fahr, cels);
	}

}