#include <iostream>
#include <string>
using namespace std;

class Book
{
private:
    string title;
    string author;
    bool isBorrowed;

public:
    Book()
    {
        title = "";
        author = "";
        isBorrowed = false;
    }

    Book(string T, string A, bool isBor = false)
    {
        title = T;
        author = A;
        isBorrowed = isBor;
    }

    void set_Info()
    {
        cout << "Enter the title and author: " << endl;
        cin >> title >> author;
    }
    string get_Title() { return title; }
    string get_Author() { return author; }
    string get_isBorrowed()
    {
        if (isBorrowed)
        {
            return " state is Borrowed";
        }
        else
        {
            return " state is Returned";
        }
    }

    bool borrowBook()
    {
        if (isBorrowed)
        {
            cout << title << " is already borrowed" << endl;
            return 1;
        }
        else
        {
            cout << title << " is successfully borrowed" << endl;
            return isBorrowed = true;
        }
    }
    bool returnBook()
    {
        cout << title << " has been returned" << endl;
        return isBorrowed = false;
    }
};

int main()
{

    Book b0;
    b0.set_Info();
    cout << b0.get_Title() << " by ";
    cout << b0.get_Author() << endl;
    b0.borrowBook();
    cout << b0.get_Title() << b0.get_isBorrowed() << endl;
    b0.returnBook();
    cout << b0.get_Title() << b0.get_isBorrowed() << endl;

    Book b1("Book1", "Author1");
    cout << b1.get_Title() << " by ";
    cout << b1.get_Author() << endl;
    b1.borrowBook();
    cout << b1.get_Title() << b1.get_isBorrowed() << endl;
    b1.borrowBook();
    cout << b1.get_Title() << b1.get_isBorrowed() << endl;
    b1.returnBook();
    cout << b1.get_Title() << b1.get_isBorrowed() << endl;

    Book b2("Book2", "Author2");
    cout << b2.get_Title() << " by ";
    cout << b2.get_Author() << endl;
    b2.borrowBook();
    cout << b2.get_Title() << b2.get_isBorrowed() << endl;
    b2.borrowBook();
    cout << b2.get_Title() << b2.get_isBorrowed() << endl;
    b2.returnBook();
    cout << b2.get_Title() << b2.get_isBorrowed() << endl;

    Book b3("Book3", "Author3");
    cout << b3.get_Title() << " by ";
    cout << b3.get_Author() << endl;
    b3.borrowBook();
    cout << b3.get_Title() << b3.get_isBorrowed() << endl;
    b3.borrowBook();
    cout << b3.get_Title() << b3.get_isBorrowed() << endl;
    b3.returnBook();
    cout << b3.get_Title() << b3.get_isBorrowed() << endl;

    return 0;
}