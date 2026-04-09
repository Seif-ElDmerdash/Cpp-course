#include <iostream>

using namespace std;

int main()
{

    double n1, n2, n3, n4, n5;

    cin >> n1 >> n2 >> n3 >> n4 >> n5;

    double sum1{n1 + n2 + n3 + n4 + n5};

    double avg1(sum1 / 5.0);

    double sum2((n1 + n2 + n3) / (n4 + n5));

    double avg3(((n1 + n2 + n3) / 3.0) / ((n4 + n5) / 2.0));

    cout << avg1 << endl
         << sum2 << endl
         << avg3 << endl;

    cout << (sum2 * (2.0 / 3.0)) << ", C = 2/3 B" << endl;

    return 0;
}