#include <iostream>
using namespace std;

// Test Case 1: 1 10
// normal_result = 55, users_result = 55

// Test Case 2: 10 100
// normal_result = 5050, users_result = 5005

// Test Case 3: 50 50
// normal_result = 1275, users_result = 50

// Test Case 4: 0 9
// normal_result = 45, users_result = 45

// Test Case 5: 10 0 (Outside the constrains)
// normal_result = 0, users_result = -45

// Test Case 6: 2 1000
// normal_result = 500500, users_result = 500499

// Test Case 7: -5 -10 (Outside teh constrains)
// normal_result = 45, users_result = 35

int main()
{

    // variable declaration
    int start;
    int end;

    // Inputs
    cout << "Enter 2 numbers (start and end): ";
    cin >> start >> end;

    // Formulas
    int normal_result{end * (end + 1) / 2};
    int users_result{normal_result - ((start - 1) * (start) / 2)};

    // Task
    cout << "The sum from 1 to " << end << " = " << normal_result << endl;
    cout << "The sum from " << start << " to " << end << " = " << users_result;

    return 0;
}