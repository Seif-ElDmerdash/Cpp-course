#include <iostream>

using namespace std;

int main(){

    double num1,num2,num3,num4,num5;

    cin>>num1>>num2>>num3>>num4>>num5;

    double sum{num1+num2+num3+num4+num5};
    double first_3 {num1+num2+num3};
    double last_2 {num4+num5};
    double first_3_avg {first_3/3};
    double last_2_avg {last_2/2};

    cout<<sum/5<<endl;
    cout<<first_3/last_2<<endl;
    cout<<first_3_avg/last_2_avg<<endl;

    cout<<sum * 2/3<<endl;
    return 0;
}