#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    while (N <= 0)
    {
        cout << "Enter a positive number!" << endl;
        cin >> N;
    }
    
    int cnt{0};

    while (cnt <= N)
    {
        if (cnt % 8 == 0 || (cnt % 3 == 0 && cnt % 4 == 0))
            cout << cnt << " ";
        ++cnt;
    }

    return 0;
}