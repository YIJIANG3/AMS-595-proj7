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

// Function to factorize a number
vector<int> factorize(int n) {
    vector<int> answer;
    for (int i = 1; i <= n; ++i) { // Check all numbers from 1 to n
        if (n % i == 0) { // If i is a factor of n
            answer.push_back(i);
        }
    }
    return answer; // Return the vector of factors
}

// Test function for factorize
void test_factorize() {
    cout << "Factors of 2: ";
    print_vector(factorize(2)); // Should print: 1 2

    cout << "Factors of 72: ";
    print_vector(factorize(72)); // Should print: 1 2 3 4 6 8 9 12 18 24 36 72

    cout << "Factors of 196: ";
    print_vector(factorize(196)); // Should print: 1 2 4 7 14 28 49 98 196
}

int main() {
    // Run test cases
    test_factorize();
    return 0;
}

