// #include <iostream>
// using namespace std;

// int main()
// {

//     int age_days;
//     cin >> age_days;

//     int years(age_days / 360);

//     int months_days(age_days - (years * 360));

//     int months(months_days / 30);

//     int days(age_days - ((years * 360) + (months * 30)));

//     cout << years << " " << months << " " << days << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main(){

    int days;
    cin>>days;

    int years(days/360);
    days = days % 360;

    int months(days/30);
    days = days % 30;

    cout << years << " " << months << " " << days << endl;


    return 0;
}