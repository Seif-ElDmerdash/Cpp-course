#include <iostream>
using namespace std;

int main()
{

    double X;
    int cnt{0};
    int start,end;

    cin>>X;

    cin>>start>>end;
    cnt+=(start<=X && X<=end);

    cin>>start>>end;
    cnt+=(start<=X && X<=end);

    cin>>start>>end;
    cnt+=(start<=X && X<=end);

    cout << cnt << endl;

    return 0;
}