#include <iostream>
#include <vector>
using namespace std;

// Function to print a vector of integers
void print_vector(const vector<int>& v) {
    for (int num : v) { // Iterate through the vector and print each element
        cout << num << " ";
    }
    cout << endl; // Add a newline at the end
}

// Function to find the prime factorization of a number
vector<int> prime_factorize(int n) {
    vector<int> answer; // Store prime factors
    for (int i = 2; i * i <= n; ++i) { // Loop up to sqrt(n)
        while (n % i == 0) { // While i divides n, it's a factor
            answer.push_back(i); // Add i to the answer
            n /= i; // Reduce n
        }
    }
    if (n > 1) { // If there's a remaining prime factor greater than sqrt(n)
        answer.push_back(n);
    }
    return answer;
}

// Test function for prime factorization
void test_prime_factorize() {
    cout << "Prime factors of 2: ";
    print_vector(prime_factorize(2)); // Should print: 2

    cout << "Prime factors of 72: ";
    print_vector(prime_factorize(72)); // Should print: 2 2 2 3 3

    cout << "Prime factors of 196: ";
    print_vector(prime_factorize(196)); // Should print: 2 2 7 7
}

int main() {
    // Run test cases
    test_prime_factorize();
    return 0;
}
