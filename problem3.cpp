#include <iostream>
#include <cmath>

int main() {
    long int largest_factor { 0 };
    long int target { 600851475143 };
    long int target_sqrt { std::sqrt(target) };
    long int factor { 2 };
    
    while (target > 0 && factor < target_sqrt) {
        if (!(target % factor)) {
            target /= factor;
            largest_factor = factor > largest_factor ? factor : largest_factor;
        } else {
            factor++;
        }
    }

    std::cout << largest_factor << "\n";

    return 0;
}