#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    int sum{0};
    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;
        for (int i = 0; i < N; ++i)
        {
            int result{1};
            int num;
            cin >> num;
            for (int pwr = i; pwr >= 0; --pwr)
            {
                result *= num;
            }
            sum += result;
        }

        cout << sum << endl;
    }

    return 0;
}