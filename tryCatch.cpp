#include <iostream>
using namespace std;

int division(int a, int b) {  // Define the division function here
    if (b == 0) {
        throw 1; // Throwing an integer is not recommended (better to throw an exception class)
    }
    return a / b;
}

int main() {
    int a = 10, b = 0, c;
    try {
        c = division(a, b);
        cout << c << endl;
    } catch (int a) { // Consider using a more appropriate exception class
        cout << "Division by zero" << endl;
    }
}
