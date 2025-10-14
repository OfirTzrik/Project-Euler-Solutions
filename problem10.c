#include <stdio.h>
#include <math.h>

int is_prime(int num) {
    for (int i = 2; i <= sqrt(num); i++) {
      if (!(num % i)) {
        return 0;
      }
    }
    return 1;
}

int main() {
    long primes_sum = 0;

    for (int i = 2; i < 2000000; i++) {
        if(is_prime(i)) {
            primes_sum += i;
        }
    }

    printf("%ld\n", primes_sum);

    return 0;
}