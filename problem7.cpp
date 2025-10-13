#include <iostream>
#include <cmath>

bool is_prime(int num) {
    for (int i = 2; i <= std::sqrt(num); i++) {
      if (!(num % i)) {
        return 0;
      }
    }
    return 1;
}

int main() {
    int num_primes { 0 };
    int curr_num { 2 };

    while (num_primes < 10001) {
      if (is_prime(curr_num)) {
        num_primes++;
      }
      curr_num++;
    }

    std::cout << --curr_num << "\n";

    return 0;
}
