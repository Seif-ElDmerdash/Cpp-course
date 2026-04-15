#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    if (N <= 1)
        cout << "NO" << endl;
    else
    {
        bool is_prime{true};

        for (int i = 2; i < N; ++i)
        {
            if (N % i == 0)
            {
                is_prime = false;
                break;
            }
        }

        if (is_prime)
            cout << "YES";
        else
            cout << "NO";
    }
    return 0;
}