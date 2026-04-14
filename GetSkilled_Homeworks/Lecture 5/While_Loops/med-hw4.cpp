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
        int min{INT_MAX};
        while (N > 0)
        {
            int num;
            cin >> num;
            if (num < min)
            {
                min = num;
            }
            
            --N;
        }

        cout << min << endl;
        --T;
    }

    return 0;
}