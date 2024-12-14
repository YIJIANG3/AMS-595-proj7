#include <iostream>
#include <vector>

// Function to print all elements of a vector
void print_vector(const std::vector<int>& v) {
    // Iterate through the vector and print each element
    for (int num : v) {
        std::cout << num << " ";
    }
    // Add a newline at the end
    std::cout << std::endl;
}

int main() {
    // Create a sample vector of integers
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    
    // Call the print_vector function to display the vector
    print_vector(numbers);

    return 0;
}
