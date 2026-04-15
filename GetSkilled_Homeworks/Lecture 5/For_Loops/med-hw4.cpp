#include <iostream>
using namespace std;

int main()
{

    int N;
    bool first_print{true};
    cin >> N;

    for (int i = 2; i <= N; ++i)
    {
        bool is_prime{true};

        for (int j = 2; j < i; ++j)
        {
            if (i % j == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            if (!first_print)
                cout << ",";
            cout << i;
            first_print = false;
        }
    }

    return 0;
}