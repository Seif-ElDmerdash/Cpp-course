#include <iostream>
using namespace std;

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
    int users_result{normal_result - ((start - 1) * ((start - 1) + 1) / 2)};

    // Task
    cout << "The sum from 1 to " << end << " = " << normal_result << endl;
    cout << "The sum from " << start << " to " << end << " = " << users_result;

    return 0;
}