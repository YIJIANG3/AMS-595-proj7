#include <iostream>
using namespace std;

int main() {
    long long a = 1, b = 2;
    cout << a << " " << b << " ";
    while (b <= 4000000) {
        long long next = a + b;
        if (next > 4000000) break;
        cout << next << " ";
        a = b;
        b = next;
    }
    cout << endl;
    return 0;
}
