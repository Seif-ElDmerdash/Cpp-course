#include <iostream>
using namespace std;

// 1st Spaces = N-rows
// 1st Stars = 2*rows -1
// 2nd triangle same logic, but looping from N to 1

int main()
{

    int N;
    cin >> N;

    int rows(1);

    while (rows <= N)
    {
        int spaces{1};
        while (spaces <= N - rows)
        {
            cout << " ";
            ++spaces;
        }
        int stars{1};
        while (stars <= (2 * rows - 1))
        {
            cout << "*";
            ++stars;
        }

        cout << endl;
        ++rows;
    }

    rows = N;
    while (rows >= 1)
    {
        int spaces{1};
        while (spaces <= N - rows)
        {
            cout << " ";
            ++spaces;
        }
        int stars(1);
        while (stars <= ((2 * rows) - 1))
        {
            cout << "*";
            ++stars;
        }

        cout << endl;
        --rows;
    }

    return 0;
}