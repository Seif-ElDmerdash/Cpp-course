#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    int R{0};

    while (N != 0)
    {
        R *= 10;
        R += (N % 10);
        N /= 10;
    }
    cout << R << " " << R * 3 << endl;

    return 0;
}