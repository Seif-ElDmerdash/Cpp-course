#include <iostream>
using namespace std;

int main()
{

    int N, rows{1};
    cin >> N;

    while (rows <= N)
    {
        int stars{1};
        while (stars <= rows)
        {
            cout << "*";
            ++stars;
        }

        cout<<endl;
        ++rows;
    }

    return 0;
}