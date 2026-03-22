#include <iostream>
using namespace std;

int main()
{
    int x{15};
    int y{2};

    cout << x + y << endl; // 17
    cout << x - y << endl; // 13
    cout << x * y << endl; // 30
    cout << x / y;         // 7

    return 0;
}

// Output: 17 13 30 7

#include <iostream>
using namespace std;

int main_1()
{
    int x{-2};
    int y{-4};

    cout << x + y << endl; // -6
    cout << x - y << endl; // 2
    cout << x * y << endl; // 8
    cout << x / y;         // 0

    return 0;
}

// Output: -6 2 8 0

#include <iostream>
using namespace std;

int main()
{
    int x{500000};
    int y{500000};

    cout << x + y << endl; // 1000000
    cout << x - y << endl; // 0
    cout << x * y << endl; // overflow
    cout << x / y;         // 1

    return 0;
}

// Output: 1000000 0 -727379968 1

#include <iostream>
using namespace std;

int main()
{
    float x{0.5};
    float y{0.25};

    cout << x + y << endl; // 0.75
    cout << x - y << endl; // 0.25
    cout << x * y << endl; // 0.125
    cout << x / y;         // 2

    return 0;
}

// Output: 0.75 0.25 0.125 2

#include <iostream>
using namespace std;

int main()
{
    float x{-0.25};
    float y{0.5};

    cout << x + y << endl; // 0.25
    cout << x - y << endl; // -0.75
    cout << x * y << endl; // -0.125
    cout << x / y;         // -0.5

    return 0;
}

// Output: 0.25 -0.75 -0.125 -0.5

#include <iostream>
using namespace std;

int main()
{
    int x{15};
    int y{0};

    cout << x + y << endl; // 15
    cout << x - y << endl; // 15
    cout << x * y << endl; // 0
    cout << x / y;         // undefined (division by zero)

    return 0;
}

// Output: 15 15 0 (runtime error)

#include <iostream>
using namespace std;

int main()
{
    int x{15};
    int y{-2};

    cout << x + y << endl; // 13
    cout << x - y << endl; // 17
    cout << x * y << endl; // -30
    cout << x / y;         // -7

    return 0;
}

// Output: 13 17 -30 -7

#include <iostream>
using namespace std;

int main()
{
    int x{-15};
    int y{3};

    cout << x + y << endl; // -12
    cout << x - y << endl; // -18
    cout << x * y << endl; // -45
    cout << x / y;         // -5

    return 0;
}

// Output: -12 -18 -45 -5
