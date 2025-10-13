#include <iostream>

bool is_palindrome(int num) {
    int num_temp { num };
    int num_rev { 0 };
    int mod {};

    while (num_temp > 0) {
        mod = num_temp % 10;
        num_rev = num_rev * 10 + mod;
        num_temp /= 10;
    }

    return num == num_rev;
}

int main() {
    int largest_palindrome { 0 };
    int current {};

    for (int i = 100; i < 1000; i++) {
        for (int j = 100; j < 1000; j++) {
            current = i * j;
            if (is_palindrome(current)) {
                largest_palindrome = current > largest_palindrome ? current : largest_palindrome;
            }
        }
    }

    std::cout << largest_palindrome << "\n";
    
    return 0;
}