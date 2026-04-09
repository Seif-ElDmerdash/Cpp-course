#include <iostream>
using namespace std;

int main()
{

    int num;
    cin >> num;

    int first(num % 10);
    num /= 10;

    int second(num % 10);
    num /= 10;

    int third(num % 10);
    num /= 10;

    cout << first + second + third << endl;

    return 0;
}