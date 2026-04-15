#include <iostream>
using namespace std;

int main()
{

    int N, M;
    cin >> N >> M;

    int cnt{1};
    while (cnt <= N)
    {
        int cnt2{1};
        while (cnt2 <= M)
        {
            cout << cnt << " x " << cnt2 << " = " << (cnt * cnt2) << endl;
            ++cnt2;
        }

        ++cnt;
    }
    return 0;
}
