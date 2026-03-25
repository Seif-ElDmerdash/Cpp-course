#include <iostream>
using namespace std;

int even1, even2, even3, even4;
int odd1, odd2, odd3, odd4;

// Test Case 1: 10 -10 20 -20 0 5 -5 0
// even_sum = -25, odd_sum = 25

// Test Case 2: -100 -1 -200 -2 -300 -3 -400 -4
// even_sum = -10, odd_sum = -1000

// Test Case 3: -3 -3 -3 -3 -3 -3 -3 -3
// even_sum = -12, odd_sum = -12

// Test Case 4: 11 12 13 14 15 16 17 18
// even_sum = 60, odd_sum = 56

// Test Case 5: 1000 1 1000 1 1000 1 1000 1
// even_sum = 4, odd_sum = 4000

// Test Case 6: 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000 1000000000
// even_sum = overflow, odd_sum = overflow

// Test Case 7: 9 -3 14 0 -8 7 2 -5
// even_sum = -1, odd_sum = 17

// Test Case 8: 5 0 5 0 5 0 5 0
// even_sum = 0, odd_sum = 20

int main()
{

    cin >> odd1 >> even1;
    cin >> odd2 >> even2;
    cin >> odd3 >> even3;
    cin >> odd4 >> even4;

    int even_sum{even1 + even2 + even3 + even4};
    int odd_sum{odd1 + odd2 + odd3 + odd4};

    cout << "The Sum of even places is: " << even_sum << endl;
    cout << "The Sum of odd places is: " << odd_sum << endl;

    return 0;
}