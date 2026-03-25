#include <iostream>
using namespace std;

// Test cases
// a = 15, b = 2           → 17, 13, 30, 7.5
// a = -2, b = -4          → -6, 2, 8, 0.5
// a = 500000, b = 500000  → 1000000, 0, 250000000000, 1
// a = 0.5, b = 0.25       → 0.75, 0.25, 0.125, 2
// a = -0.25, b = 0.5      → 0.25, -0.75, -0.125, -0.5
// a = 15, b = 0           → 15, 15, 0, inf (division by zero)
// a = 15, b = -2          → 13, 17, -30, -7.5
// a = -15, b = 3          → -12, -18, -45, -5
// a = 0, b = 27           → 0, 0, 0 , 0
// a = -25, b = 0          → -25, -25, 0, -inf (division by zero)

int main()
{

    double a, b;

    cout << "Enter 2 numbers: ";
    cin >> a >> b;

    cout << a << " + " << b << " = " << a + b << endl;
    cout << a << " - " << b << " = " << a - b << endl;
    cout << a << " * " << b << " = " << a * b << endl;
    cout << a << " / " << b << " = " << a / b << endl;

    return 0;
}