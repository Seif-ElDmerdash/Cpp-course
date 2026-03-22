#include <iostream>
using namespace std;

int main()
{

    // Variables

    int num1;
    int num2;
    int swap;

    // Inputs

    cout << "Enter First number :";
    cin >> num1;
    cout << "Enter Second number :";
    cin >> num2;

    // Swapping
    swap = num1;
    num1 = num2;
    num2 = swap;

    cout << "Swapping..." << endl;
    cout << "First number is now: " << num1 << endl;
    cout << "Second number is now: " << num2;

    return 0;
}