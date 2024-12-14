#include <iostream>
#include <cmath>
using namespace std;

// Function to check if a number is prime
bool isprime(int n) {
    if (n < 2) return false; // Numbers less than 2 are not prime
    for (int i = 2; i <= sqrt(n); ++i) { // Check divisibility from 2 to sqrt(n)
        if (n % i == 0) return false; // If divisible, it's not prime
    }
    return true; // If no divisor is found, it's prime
}

// Function to test isprime
void test_isprime() {
    cout << "isprime(2) = " << isprime(2) << '\n';  // Expect: true (1)
    cout << "isprime(10) = " << isprime(10) << '\n'; // Expect: false (0)
    cout << "isprime(17) = " << isprime(17) << '\n'; // Expect: true (1)
}

int main() {
    // Run the test function
    test_isprime();
    return 0;
}
