#include <iostream>
using namespace std;

int main()
{

    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;

    if (n1 < n2 && n1 < n3)
    {
        if (n2 < n3)
            cout << n1 << " " << n2 << " " << n3 << endl;
        else
            cout << n1 << " " << n3 << " " << n2 << endl;
    }
    else if (n2 < n1 && n2 < n3)
    {
        if (n1 < n3)
            cout << n2 << " " << n1 << " " << n3 << endl;
        else
            cout << n2 << " " << n3 << " " << n1 << endl;
    }
    else if (n3 < n1 && n3 < n2)
    {
        if (n1 < n2)
            cout << n3 << " " << n1 << " " << n2 << endl;
        else
            cout << n3 << " " << n2 << " " << n1 << endl;
    }
    return 0;
}

// The Swapping solution for practice

// #include <iostream>
// using namespace std;

// int main()
// {

//     int a, b, c, temp;

//     cin >> a >> b >> c;

//     if (b < a)
//     {
//         temp = a;
//         a = b;
//         b = temp;
//     }
//     if (c < b)
//     {
//         temp = b;
//         b = c;
//         c = temp;

//         if (b < a)
//         {
//             temp = a;
//             a = b;
//             b = temp;
//         }
//     }

//     cout << a << " " << b << " " << c << endl;

//     return 0;
// }