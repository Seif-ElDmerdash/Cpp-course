#include <iostream>
using namespace std;

int main()
{

    int N, A, B;
    cin >> N >> A >> B;
    int sum{0};

    for (int i = 1; i <= N; ++i)
    {
        int j = i;
        int digits_sum{0};
        for (; j > 0; j /= 10)
        {
            digits_sum += j % 10;
        }

        if (A <= digits_sum && digits_sum <= B)
            sum += i;
    }

    cout << sum << "\n";

    return 0;
}