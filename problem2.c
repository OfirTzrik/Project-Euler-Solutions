#include <stdio.h>

int main(void) {
	long f1 = 1;
	long f2 = 2;
	long fn;
	long sum = 0;

	while ((fn = f1 + f2) <= 4000000) {
		if (!(fn % 2)) {
			sum += fn;
		}
		f1 = f2;
		f2 = fn;
	}

	printf("%ld\n", sum + 2);

	return 0;
}
