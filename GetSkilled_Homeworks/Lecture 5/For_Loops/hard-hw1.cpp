// N = 5
// Row = N
// ROW = 1 , STAR at 1 "ROW" STAR at 5 = N+1 - ROW
// ROW = 2 , STAR at 2 "ROW" STAR at 4 = N+1 - ROW
// ROW = 3 , STAR at 3 "ROW" STAR at 3 = N+1 - ROW  
// ROW = 4 , STAR at 4 "ROW" STAR at 2 = N+1 - ROW
// ROW = 5 , STAR at 5 "ROW" STAR at 1 = N+1 - ROW

#include <iostream>
using namespace std;

int main()
{

    int N;
    cin >> N;

    for (int row{1}; row <= N; ++row)
    {
        for (int column{1}; column <= N; ++column)
        {

            if (row == column || column == ((N+1) - row))
                cout << "*";
            else
                cout << " ";
                }
        cout << endl;
    }

    return 0;
}