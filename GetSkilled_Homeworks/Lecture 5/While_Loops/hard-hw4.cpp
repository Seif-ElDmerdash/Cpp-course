#include <iostream>
using namespace std;

int main()
{

    int T;
    cin >> T;

    while (T > 0)
    {
        int N;
        cin >> N;

        int cnt{1};
        int sum{0};
        while (cnt <= N)
        {
            int num;
            cin >> num;

            int power = cnt;
            int result{1};

            while (power > 0)
            {
                result *= num;
                --power;
            }
            sum += result;
            ++cnt;
        }
        cout << sum << endl;
        --T;
    }
    return 0;
}