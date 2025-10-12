#include <stdio.h>

int main(void) {
	int sum_mults = 0;

	for (int i = 3; i < 1000; i++) {
		if (!(i % 3) || !(i % 5)) {
			sum_mults += i;
		}
	}

	printf("%d\n", sum_mults);

	return 0;
}
