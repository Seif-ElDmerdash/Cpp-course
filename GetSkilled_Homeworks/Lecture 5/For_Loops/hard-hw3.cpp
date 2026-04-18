#include <iostream>
using namespace std;

int main()
{

    int n, m, w;

    cin >> n >> m >> w;
     
    int count{0};

    for (int i = 1; i <= n; ++i)
        for (int j = i; j <= m; ++j)
            if (i+j<=w)
                count+= w-(i+j) + 1;

    cout << count << endl;

    return 0;
}
