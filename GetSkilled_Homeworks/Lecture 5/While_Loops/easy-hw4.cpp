#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    while (N > 0)
    {
        int stars{1};
        while(stars<=N)
        {
            cout<<"*";
            ++stars;
        }
        cout<<endl;
        --N;
    }

    return 0;
}