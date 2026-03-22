#include <iostream>
using namespace std;

int add(int x, int y)
{
    return x + y;
}

float add(float x, float y)
{
    return x + y;
}

int subtract(int x, int y)
{
    return x - y;
}

float subtract(float x, float y)
{
    return x - y;
}

int multiply(int x, int y)
{
    return x * y;
}

float multiply(float x, float y)
{
    return x * y;
}

int division(int x, int y)
{
    return x / y;
}

float division(float x, float y)
{
    return x / y;
}

int main()
{
    // User inputs
    float x, y;
    int choice;

    cout << "Enter 2 numbers <spc>: ";
    cin >> x >> y;
    cout << "Choose operation from 1 to 4: \n1: +\n2: -\n3: *\n4: /\n";
    cin >> choice;

    switch (choice)
    {

    case (1):
        cout << add(x, y) << endl;
        break;

    case (2):
        cout << subtract(x, y) << endl;
        break;

    case (3):
        cout << multiply(x, y) << endl;
        break;

    case (4):
        if (y != 0)
            cout << division(x, y) << endl;
        else
            cout << "ERROR: You can't divide by zero!" << endl;
        break;

    default:
        cout << "Enter a valid choice";
    }

    return 0;
}