#include <iostream>

int main() {
    int sum_squares { 0 };
    int square_sums { 0 };

    for (int i = 0; i <= 100; i++) {
      sum_squares += i * i;
      square_sums += i;
    }

    std::cout << (square_sums * square_sums) - sum_squares << "\n";

    return 0;
}
