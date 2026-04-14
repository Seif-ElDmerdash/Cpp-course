// #include <iostream>
// using namespace std;

// int main()
// {

//     int N;
//     cin >> N;

//     while (!(1 <= N && N <= 30))
//     {
//         cout << "Enter a number between 1-30:" << endl;
//         cin >> N;
//     }

//     int finish{0};
//     int num{0};
//     int exit{1};

//     while (finish < N)
//     {
//         while (exit <= N)
//         {

//             if (num % 3 == 0 && !(num % 4 == 0))
//             {
//                 cout << num << " ";
//                 ++num;
//                 ++exit;
//             }
//             else
//                 ++num;
//         }

//         ++finish;
//     }

//     return 0;
// }

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    while (!(1 <= N && N <= 30))
    {
        cout << "Enter a number between 1-30:" << endl;
        cin >> N;
    }

    int start = 3;
    while (N)
    {
        if (start % 4 != 0)
            --N, cout << start << " ";
        start += 3;
    }

    return 0;
}