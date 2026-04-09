#include <iostream>
using namespace std;

int main()
{

    int num;

    cin >> num;

    bool is_even1(num % 2 == 0);

    cout << is_even1 << endl;

    double result = (num / 2) * 2;

    bool is_even2((num - result) == 0);

    cout << is_even2 << endl;

    int mod10(num % 10);
    bool is_even3(mod10 == 0 || mod10 == 2 || mod10 == 4 || mod10 == 6 || mod10 == 8);

    cout << is_even3 << endl;

    return 0;
}