// #include <iostream>
// using namespace std;

// int main()
// {
//     int cnt{0};
//     for (int a{1}; a <= 200; a++)
//         for (int b{1}; b <= 200; b++)
//             for (int c{1}; c <= 200; c++)
//                 for (int d{1}; d <= 200; d++)
//                     cnt+=((a + b) == (c + d));
//     cout << cnt << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{
    int cnt{0};
    for (int a{1}; a <= 200; a++)
        for (int b{1}; b <= 200; b++)
            for (int c{1}; c <= 200; c++)
            {
                int d = ((a + b) - c);

                if (1 <= d && d <= 200)
                    cnt++;
            }
    cout << cnt << endl;
    return 0;
}