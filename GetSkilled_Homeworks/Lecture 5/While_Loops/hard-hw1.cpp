#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;
    int pos{0};
    while (N > pos)
    {
        string str;
        cin >> str;
        if (str == "NO" || str == "no" || str == "No" || str == "nO" ||
            str == "ON" || str == "on" || str == "oN" || str == "On")
            cout << str << endl;
        ++pos;
    }

    return 0;
}