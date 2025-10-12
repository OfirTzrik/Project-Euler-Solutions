#include <stdio.h>

int main(void) {
	double sum_odd = 0;

	for (double i = 1; i < 290000; i += 2) {
		sum_odd = sum_odd + i * i;
	}

	printf("%f\n", sum_odd);

	return 0;
}
