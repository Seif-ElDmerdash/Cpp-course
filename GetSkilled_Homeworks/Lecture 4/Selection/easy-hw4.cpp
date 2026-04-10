#include <iostream>
using namespace std;

int main()
{

    double X, n1, n2, n3, n4, n5;
    cin >> X >> n1 >> n2 >> n3 >> n4 >> n5;

    int more_count{0};
    int less_count{0};

    if (n1 <= X)
        less_count += 1;
    else
        more_count += 1;
    if (n2 <= X)
        less_count += 1;
    else
        more_count += 1;
    if (n3 <= X)
        less_count += 1;
    else
        more_count += 1;
    if (n4 <= X)
        less_count += 1;
    else
        more_count += 1;
    if (n5 <= X)
        less_count += 1;
    else
        more_count += 1;

    cout << less_count << " " << more_count << endl;
    return 0;
}

// Boolean Solution for practice

// #include <iostream>
// using namespace std;

// int main()
// {
//     double x, a, b, c, d, e;
//     cin >> x >> a >> b >> c >> d >> e;

//     int cnt{0};

//     cnt += (a <= x);
//     cnt += (b <= x);
//     cnt += (c <= x);
//     cnt += (d <= x);
//     cnt += (e <= x);
//     cout << cnt << " " << 5 - cnt << endl;
//     return 0;
// }