#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    double odd_sum{0};
    double even_sum{0};
    int odd_cout{0};
    int even_count{0};
    int position{1};

    while (position<=N)
    {
        double num;
        cin >> num;

        if (position % 2 == 0)
        {
            even_sum += num;
            even_count++;
            position++;
        }
        else
        {
            odd_sum += num;
            odd_cout++;
            position++;
        }
    }

    cout << (odd_sum / odd_cout) << " " << (even_sum / even_count) << endl;

    return 0;
}