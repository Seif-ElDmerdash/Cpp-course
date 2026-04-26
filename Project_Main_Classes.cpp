#include <iostream>
using namespace std;

class Movie
{

private:
    string title;
    string genre;
    double basePrice;

public:
    Movie()
    {
        title = "";
        genre = "";
        basePrice = 0;
    };
    Movie(string t, string g, double p)
    {
        title = t;
        genre = g;
        basePrice = p;
    }

    void set_title()
    {
        cout << "Enter the movie title: " << endl;
        getline(cin, title);
    }
    void set_genre()
    {
        cout << "Enter the movie genre: " << endl;
        cin >> genre;
    }
    void set_basePrice()
    {
        cout << "Enter the movie basePrice: " << endl;
        cin >> basePrice;
    }

    string get_title()
    {
        return title;
    }
    string get_genre()
    {
        return genre;
    }
    double get_basePrice()
    {
        return basePrice;
    }
};

class Seat
{

protected:
    int row;
    int coloumn;
    bool isBooked;

public:
    Seat(int r, int col)
    {
        row = r;
        coloumn = col;
    };

    virtual ~Seat() {}

    void bookSeat()
    {
        cout << "The seat is booked" << endl;
        isBooked = true;
    }
    void cancelSeat()
    {
        cout << "The seat is not booked" << endl;
        isBooked = false;
    }
    bool isAvailable()
    {
        cout << "Seat state: " << isBooked << endl;
        return !isBooked;
    }

    virtual double calculatePrice(double basePrice) const = 0;
};

class Regular_Seat : public Seat
{
public:
    Regular_Seat(int r, int col) : Seat(r, col) {}
    double calculatePrice(double basePrice) const override { return basePrice; }
};

class VIP_Seat : public Seat
{
public:
    VIP_Seat(int r, int col) : Seat(r, col) {}
    double calculatePrice(double basePrice) const override { return basePrice * 1.2; }
};