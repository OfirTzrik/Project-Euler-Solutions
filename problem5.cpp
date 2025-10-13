#include <iostream>

int main() {
	int i { 19 };

	while (i++) {
		for (int j = 2; j <= 20; j++) {
			if (i % j) {
				break;
			}
			if (j == 20) {
				goto done;
			}
		}
	}

done:
	std::cout << i << "\n";
	return 0;
}
