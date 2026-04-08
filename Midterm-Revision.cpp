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

// #include <iostream>
// using namespace std;

// class Students{

//     private:

//         int ID;
//         string st_name;
//         double marks;

//     public:

//         void SetInfo(){
//             cout << "Enter Student ID: ";
//             cin>>ID;
//             cout << "Enter Student Name: ";
//             cin.ignore();
//             getline(cin, st_name);
//             cout << "Enter Marks: ";
//             cin >> marks;
//         }

//         void displayinfo(){
//             cout<<"ID: "<<ID<<endl
//                 <<"Name: "<<st_name<<endl
//                 <<"Grade: "<<marks<<endl
//                 <<"GPA: "<<get_marks()<<endl;
//         }

//         char get_marks(){
//             if(marks>=85){return 'A';}
//             else if(marks>=70){return 'B';}
//             else if(marks>50){return 'C';}
//             else{return 'F';}
//         };

// };

// int main(){

//     Students st1;
//     Students st2;

//     st1.SetInfo();
//     st2.SetInfo();

//     st1.displayinfo();
//     st2.displayinfo();

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {
//     int N;

//     cout << "Enter size of array: ";
//     cin >> N;

//     int array[N];

//     for(int i=0; i<N;i++){
//         cin>>array[i];
//      
        // }
//     for (int i = 0; i < N; i++){
//      if (i%2 != 0){
//             cout<<array[i]<<endl;
//         }
//         else{
//             continue;
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;
//     int a[n];

//     for (int i = 0; i < n; i++) {
//         cin >> a[i];
//     }

//     for (int i = 0; i < n; i++) {
//         if (i % 2 != 0) {
//             cout << a[i] << " ";
//         }
//     }

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main() {

//     int N;
//     int nums;
//     int largest{0};

//     cout<<"Enter how many numbers to enter: ";
//     cin>>N;

//     for(int i = 0 ;i<N;i++){
        
//         cout<<"Enter the numbers: ";
//         cin>>nums;
//         if(nums>largest){
//             largest = nums;
//         }
//     }
//     cout<<largest;
// }

//Question 2: Sum of Odd Numbers until -1
//Write a program that keeps taking integers until the user enters -1, then displays the sum of all odd numbers entered.

// #include <iostream>
// using namespace std;

// int main(){

//     int N;
//     int sum=0;

//     while(true){
//         cout<<"Enter numbers (-1 to stop): ";
//         cin>>N;
        
//         if(N== -1){
//             break;
//         }
//         if(N%2 != 0){
//             sum+=N;
//         }
//     }

//     cout<<sum;

//     return 0;
// }


// Question 3: Factorial CalculationWrite a program that calculates the factorial (n!) of a given positive integer.

// #include <iostream>
// using namespace std;

// int main(){
 
//     int N;
//     double factorial=1;

//     cin>>N;

//     for(int i=1;i<=N;i++){
//         factorial *= i;
//     }

//     cout<<factorial;

//     return 0;
// }
//Question 4: Average of 5 Grades Write a program that inputs 5 grades and calculates the average. If the average is >= 50, print "Pass", otherwise print "Fail".

// #include <iostream>
// using namespace std;

// int main(){

//     int grades;
//     double average;
//     int sum=0;

//     for(int i =0;i<5;i++){

//         cout<<"Enter a grade: ";
//         cin>>grades;
//         sum+=grades;
//     }

//     average = sum/5;

//     cout<<((average>=50)? "Pass":"Fail");

// }


//Question 5: Simple Countdown
//Write a program that takes a number and counts down to zero using a while loop

// #include <iostream>
// using namespace std;

// int main(){

//     int number;
//     cin>>number;

//     while(number>=0){

//         cout<<number--<<endl;
//     }

//     return 0;
// }

// Question 6: Circle ClassCreate a Circle class with a private radius. Include methods to set the radius and calculate the area (Area = pi r^2).

// Question 7: Rectangle Class
// Create a Rectangle class with width and height. Include a method isSquare() that returns true if width equals height.

// Question 8: Car Class
// Create a Car class with brand and speed. Include a method accelerate() that increases speed by 10.

// Question 9: Account Class
// Create a BankAccount class with a balance. Include a deposit(double amount) method and a display() method.

//Question 10: Employee Class
//Create an Employee class with name and salary. If the salary is less than 3000, increase it by 10% using a applyBonus() method.

// #include <iostream>
// using namespace std;

// class Employee{

//     private:

//         string name;
//         double salary;
    
//     public:

//         Employee(){
//             cout<<"Zyad 3ayiz constructor"<<endl;
//         }

//        void setinfo(string x, double y){

//                 name = x;
//                 salary = y;
//        }

//        double applyBonus(){
//         return (salary*=1.1);
//        }

//        string getname(){
//         return name;
//        }

//        double getsalary(){

//         if(salary<3000){
//             applyBonus();
//         }
//         return salary;
//        }

// };


// int main(){

//     Employee E1;
//     Employee E2;

//     E1.setinfo("Kareem",1000.00);
//     E2.setinfo("Atef",100.50);

//     cout<<E1.getname()<<endl<<E1.getsalary()<<endl;
//     cout<<E2.getname()<<endl<<E2.getsalary()<<endl;

//     return 0;
// }