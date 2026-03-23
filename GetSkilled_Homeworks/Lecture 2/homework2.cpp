#include <iostream>
using namespace std;

int main()
{
    string name_1;
    cout << "Student 1 name is: ";
    cin >> name_1;

    string id_1;
    cout << "His id is: ";
    cin >> id_1;

    double grade_1;
    cout << "His id grade is: ";
    cin >> grade_1;

    string name_2;
    cout << "Student 2 name is: ";
    cin >> name_2;

    string id_2;
    cout << "His id is: ";
    cin >> id_2;

    double grade_2;
    cout << "His grade is: ";
    cin >> grade_2;

    cout << "\nStudents grades in math: \n";

    cout << name_1 << " (with id " << id_1 << ") got grade: " << grade_1 << endl;
    cout << name_2 << " (with id " << id_2 << ") got grade: " << grade_2 << endl;
    cout << "Average grade is: " << (grade_1 + grade_2) / 2.0 << endl;

    return 0;
}