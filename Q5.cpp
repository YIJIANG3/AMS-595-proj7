#include <iostream>
#include <vector>
using namespace std;

// Function to print Pascal's Triangle
void print_pascals_triangle(int n) {
    vector<vector<int>> triangle;

    for (int i = 0; i < n; ++i) {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; ++j) {
            row[j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
        triangle.push_back(row);

        // Print the current row
        for (int val : row) {
            cout << val << " ";
        }
        cout << endl;
    }
}

// Test
int main() {
    int rows;
    cout << "Enter the number of rows for Pascal's Triangle: ";
    cin >> rows;
    print_pascals_triangle(rows);
    return 0;
}

