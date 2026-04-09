#include <iostream>
using namespace std;

int main()
{

    int a, b;

    cin >> a >> b;

    int result(a / b);
    int remainder(a - (result * b));

    cout << remainder << endl;

    return 0;
}
