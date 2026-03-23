#include <iostream>
using namespace std;

int even1, even2, even3, even4;
int odd1, odd2, odd3, odd4;
// 10 19 16 13 14 25 27 28

int main()
{

    cin >> odd1 >> even1;
    cin >> odd2 >> even2;
    cin >> odd3 >> even3;
    cin >> odd4 >> even4;

    int even_sum{even1 + even2 + even3 + even4};
    int odd_sum{odd1 + odd2 + odd3 + odd4};

    cout << "The Sum of even places is: " << even_sum << endl;
    cout << "The Sum of odd places is: " << odd_sum << endl;

    return 0;
}