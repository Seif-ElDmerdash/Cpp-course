#include <iostream>
using namespace std;

int main()
{

    int grade_1{30};
    string name_1{"Ahmed"};
    string id_1{"111"};

    int grade_2{20};
    string name_2{"Hamada"};
    string id_2{"222"};

    cout << "Student 1 name is: " << name_1 << endl;
    cout << "His id is: " << id_1 << endl;
    cout << "His id grade is: " << grade_1 << endl;
    cout << "Student 2 name is: " << name_2 << endl;
    cout << "His id is: " << id_2 << endl;
    cout << "His grade is: " << grade_2 << "\n"
         << "\n";

    cout << "Students grades in math: " << endl;

    cout << name_1 << " (with id " << id_1 << ")" << " got grade: " << grade_1 << endl;
    cout << name_2 << " (with id " << id_2 << ")" << " got grade: " << grade_2 << endl;
    cout << "Average grade is: " << (grade_1 + grade_2) / 2;

    return 0;
}