#include <iostream>
using namespace std;

int main()
{

    int A, B;
    cin >> A >> B;

    if (A%2 != 0 && B%2 != 0)
        cout << A * B << endl;
    else if (A%2 == 0 && B%2 == 0)
        cout << A / B << endl;
    else if (A%2 != 0 && B%2 == 0)
        cout << A + B << endl;
    else if (A%2 == 0 && B%2 != 0)
        cout << A - B << endl;

    return 0;
}