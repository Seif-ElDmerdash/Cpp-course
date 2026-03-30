// #include <iostream>
// using namespace std;

// int main()
// {

//     int N;
//     int smallest;

//     cout << "Enter a number: ";
//     cin >> N;

//     int numbers[N];

//     for (int i = 1; i <=N; i++){

//         cout<<"Enter a num: ";
//         cin>>numbers[i];
//         if(numbers[i]< smallest)
//             smallest = numbers[i];
//     }
//         cout<<"The Smallest number is: "<<smallest;

// }

// #include <iostream>
// using namespace std;

// class Square
// {

// private:
//     int side;

// public:
//     void SetSide(double x)
//     {
//         side = x;
//     }

//     int GetSide()
//     {
//         return side;
//     }

//     int CalculatePerimerter()
//     {
//         return side * 4;
//     }
// };

// int main()
// {

//     Square sq1;

//     sq1.SetSide(5);
//     cout << sq1.GetSide() << endl
//          << sq1.CalculatePerimerter();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     int N;
//     int even_sum {0};

//     cout<<"Enter numbers (0 to Stop): ";
//     while(true){

//         cin>>N;

//         if(N==0)break;

//         if(N%2==0){
//             even_sum += N;
//         }
//     }
//     cout<<even_sum;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     const int PIN{1234};
//     int pin;
//     int attempts{0};

//     while(attempts<3){

//         cout<<"Enter the PIN: ";
//         cin>>pin;

//         if(pin==PIN){
//         cout<<"Access Granted";
//             return 0;
//         }
//         else{
//             cout<<"Incorrect PIN"<<endl;
//             attempts ++;
//         }

//     }

//     cout<<"Access Denied"<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int Num;
//     int count_postive=0;
//     int count_negative=0;
//     int count_zero=0;

//     for (int i = 0; i < 10; i++)
//     {
//         cout<<"Enter a number: ";
//         cin >> Num;

//         if (Num > 0)
//         {
//             count_postive++;
//         }
//         else if (Num < 0)
//         {
//             count_negative++;
//         }
//         else
//         {
//             count_zero++;
//         }
//     }

//     cout<<"The positives:"<<count_postive<<endl<<"The negatives:"<<count_negative<<endl<<"The zeros:"<<count_zero;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Box
//     {
//     private:
//         double length, width, height;

//     public:
//         void Set_Sides(double x, double y, double z){

//             length = x;
//             width = y;
//             height = z;
//         }

//         void Get_Sides(){
//             cout<<length<<endl
//             <<width<<endl
//             <<height<<endl;
//         }

//         double CalculateVolume(){

//             return length*width*height;

//         }
//     };

// int main()
// {

//     Box zyads_box;

//     zyads_box.Set_Sides(10,10,10);
//     zyads_box.Get_Sides();
//     cout<<zyads_box.CalculateVolume()<<endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int num;
//     cin >> num;

//     for (int j = 10; j > 0 ; j--)
//     {
//         cout << j << " * " << num << " = " << j * num << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// class Product
// {

// private:
//     string product_name;
//     double price;

// public:
//     void Set_ProductName(string Name)
//     {
//         product_name = Name;
//     }

//     void Set_Price(double value)
//     {
//         price = value;
//     }

//     string Get_ProductName()
//     {
//         return product_name;
//     }

//     double Get_Price()
//     {
//         return price;
//     }
// };

// int main()
// {

//     Product P1;
//     Product P2;

//     P1.Set_ProductName("Shay blaban");
//     P1.Set_Price(24.99);
//     P2.Set_ProductName("Shay sada");
//     P2.Set_Price(19.99);

//     cout << "Product 1 is: " << P1.Get_ProductName() << endl
//          << "Product 1 price is: " << P1.Get_Price() << endl
//          << "Product 2 is: " << P2.Get_ProductName() << endl
//          << "Product 2 price is: " << P2.Get_Price() << endl;

//     if (P2.Get_Price() > P1.Get_Price())
//         cout << P2.Get_ProductName() << " is more expensive than " << P1.Get_ProductName() << endl;
//     else{
//         cout << P1.Get_ProductName() << " is more expensive than " << P2.Get_ProductName() << endl;
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     int num;
//     int mult_counter{0};

//     while (true)
//     {

//         cout << "Enter a number (-1 to stop): ";
//         cin >> num;

//         if (num == -1)
//             break;

//         else if (num % 3 == 0)
//         {
//             mult_counter++;
//         }

//         else
//         {
//             continue;
//         }
//     }
//     cout << "The numbers divisible by 3 are: " << mult_counter;
//     return 0;
// }

#include <iostream>
using namespace std;


class Students{

    private:

        int ID;
        string st_name;
        double marks;

    public:

        void SetInfo(){
            cout << "Enter Student ID: ";
            cin>>ID;
            cout << "Enter Student Name: ";
            cin.ignore();
            getline(cin, st_name);
            cout << "Enter Marks: ";
            cin >> marks;
        }

        
        void displayinfo(){
            cout<<"ID: "<<ID<<endl
                <<"Name: "<<st_name<<endl
                <<"Grade: "<<marks<<endl
                <<"GPA: "<<get_marks()<<endl;
        }

        char get_marks(){
            if(marks>=85){return 'A';}
            else if(marks>=70){return 'B';}
            else if(marks>50){return 'C';}
            else{return 'F';}
        };

    
};

int main(){

    Students st1;
    Students st2;    

    st1.SetInfo();
    st2.SetInfo();

    st1.displayinfo();
    st2.displayinfo();

    return 0;
}