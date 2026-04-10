#include <iostream>
using namespace std;

int main()
{

    int n1, n2, n3;
    cin >> n1 >> n2 >> n3;

    int res{INT_MIN};
    if (n1 < 100 || n2 < 100 || n3 < 100)
    {
        if (n1 < 100 && n1 > res)
            res = n1;
        if (n2 < 100 && n2 > res)
            res = n2;
        if (n3 < 100 && n3 > res)
            res = n3;
        cout << res << endl;
    }
    else
        cout << -1;
    return 0;
}