// // #include <iostream>
// // #include <cmath>

// // int main(){
// //     using namespace std;

// //     double a; double b; double c;

// //     cout << "Enter A:";
// //     cin >> a;
// //     cout << "Enter B:";
// //     cin >> b;
// //     cout << "Enter C:";
// //     cin >> c;

// //     if(a==b && b==c && a==c){
// //         cout << "This is an Equilatoral Triangle!";
// //     }
// //     else if (a==b || b==c || a==c){
// //         cout << "This is an Isoceles Triangle!";
// //     }
// //     else{
// //         cout << "This a Scalne Triangle!";
// //     }

// //     return 0;
// // }

// // Watermelon problem ;P

// // #include <iostream>

// // int main(){
// //     using std::cout; using std::cin;

// //     int w;
// //     cin >> w;
// //     if(1<=w<=100)
// //         {if(w%2 == 0 && w!=2){
// //             cout << "YES";
// //         }
// //         else{
// //             cout << "NO";
// //         }}
// //     return 0;
// // }

// // Simple Caculator

// #include <iostream>

// int main(){

//     using std::cout; using std::cin;

//     double num1; double num2;double result;
//     char op;

//     cout << "************ CALCULATOR ************" << "\n";

//     cout << "Enter operation (+ - / *)" << "\n";
//     cin >> op;
//     cout << "Enter #1: ";
//     cin >> num1;
//     cout << "Enter #2: ";
//     cin >> num2;
//     switch(op){
//         case '+':
//             result = num1 + num2;
//             cout << result << "\n";
//             break;
//         case '-':
//             result = num1 - num2;
//             cout << result << "\n";
//             break;
//         case '*':
//             result = num1 * num2;
//             cout << result << "\n";
//             break;
//         case '/':
//             result = num1 / num2;
//             cout << result << "\n";
//             break;
//         default:
//             cout << "Invalid response" << "\n";
//     }

//     cout << "************************************";

//     return 0;
// }

// #include <iostream>

// int main(){
//     using namespace std;

//     int x;  cout << "Enter a number: "; cin >> x;

//     cout << ((x&1) ==0 ? "Even" : "Odd");

//     return 0;
// }

// #include <iostream>

// int main(){
//     using namespace std;

//     char unit ; double temp;

//     cout << "F = Fahrenheit" << "\n";
//     cout << "C = Celsius" << "\n";
//     cout << "Enter what unit you want to convert to" << "\n";
//     cin >> unit;

//     if(unit == 'F'|| unit == 'f'){

//         cout << "Enter the temprature in Celsius: " << "\n";
//         cin >> temp;
//         temp = (1.8*temp) + 32;
//         cout << "Temprature in Fahrenheit = " << temp << "\n";
//     }
//     else if(unit == 'C'|| unit == 'c'){

//         cout << "Enter the temprature in Fahrenheit: " << "\n";
//         cin >> temp;
//         temp = (temp - 32) / 1.8;
//         cout << "Temprature in Celsius = " << temp << "\n";
//     }
//     else{
//         cout << "Enter F or C only.";
//     }

//     return 0;
// }

// #include <iostream>

// int main(){
//     using namespace std;

//     string name;
//     while(name.empty()){
//         cout << "Enter your name: ";
//         getline(cin,name);
//     }

//     cout << "Hello " << name;
//     return 0;

// }

// #include <iostream>

// int main(){
//     using std::cout,std::cin;

//     int number;

//     do{
//         cout << "Enter a positive number: " , cin >> number;
//     }while(number < 0);

//     cout << "The number is " << number;

//     return 0;
// }

// #include <iostream>

// int main(){
//     using std::cout,std::cin;

//     for(int i = 1 ; i <=3; i++){

//         cout<<"Ramdan Kareem ya wlad el nas!!\n";
//     }
//  return 0;
// }

// #include <iostream>
// int main(){
//     using std::cout ,std::cin;

//     for(int i=1; i<= 20; i++){
//         if(i==13){
//             continue;
//         }
//         cout<<i<<"\n";
//     }

//     return 0;
// }

// #include <iostream>
// int main(){
//     using std::cout ,std::cin;
//     int rows ,columns; char symbol;

//     cout << "Enter number of rows: " , cin >> rows;
//     cout << "Enter number of columns: " , cin >> columns;
//     cout << "Enter the symbol: " , cin >> symbol;

//     for(int i=1; i<=rows;i++){
//         for (int j=1; j<=columns; j++){
//             cout << symbol;
//         }
//         cout <<"\n";
//     }

// }

// #include <iostream>
// int main(){
//     using std::cout ,std::cin;
//     int rows; char symbol;

//     cout << "Enter number of rows: " , cin >> rows;
//     cout << "Enter the symbol: " , cin >> symbol;

//     for(int i=1; i<=rows;i++){
//         for(int s=rows; s>i; s--){
//             cout <<" ";
//         }
//         for (int j=1; j<=i; j++){
//             cout << symbol << " ";
//         }
//         cout <<"\n";
//     }

//     return 0;
// }

// #include <iostream>

// int main(){
//     using namespace std;

//     int n ; string word;
//     cin >> n;

//     for(int i = 0; i<n ; i++ ){

//     cout << "Enter a word: ", cin >> word;

//     if(word.length()>10){
//         cout<< word[0] << word.length()-2 << word[word.length()-1] << "\n";
//     }
//     else{
//         cout << word << "\n";
//     }
//     }

//     return 0;
// }

// #include <iostream>

// int main(){

//     srand(time(NULL));

//     int num1 = (rand() % 6) + 1;
//     int num2 = (rand() % 6) + 1;
//     int num3 = (rand() % 6) + 1;

//     std::cout << num1 << '\n' << num2 << '\n' << num3;

// }

// #include <iostream>
// #include <ctime>

// int main(){

//     srand(time(0));

//     int randnum = rand() % 5 + 1;

//     switch(randnum){
//         case 1 : std::cout << "You have won a T-shirt";
//                 break;
//         case 2 : std::cout << "You have won a T-shirT";
//                 break;
//         case 3 : std::cout << "You have won a T-shirTTT";
//                 break;
//         case 4 : std::cout << "You have won a T-shirTTTT";
//                 break;
//         case 5 : std::cout << "You have won a T-shirTTTTT";
//                 break;
//     }
// }

// #include <iostream>

// int main(){
//     using namespace std;

//     srand(time(NULL));

//     int num = (rand() % 100) +1;
//     int guess;
//     int tries = 0;

//     do{
//         cout << "Enter a number between 1-100\n";
//         cin>> guess;
//         tries++ ;
//         if(guess > num){
//             cout << "Too high!\n";
//         }
//         else if(guess < num){
//             cout << "Too low!\n";
//         }
//         else{
//             cout << "Congrats # tries: " << tries;
//         }

//     }while(guess != num);

//

// #include <iostream>
// #include <cmath>
// #include <limits>
// using namespace std;

// int main()
// {

//     bool o{true};
//     float y{3.5};
//     double z{32.67148465489};
//     int x{5};
//     unsigned int m{2147483646 + 1};
//     long long l{9223372036854775807};
//     unsigned long long n{18446744073709551615};
//     char ch{'S'};
//     unsigned char ch2{'T'};
//     std::string word{"SEIF"};
//     const std::string NAME{"TAYER"};

//     cout << CHAR_MAX << endl
//          << CHAR_MIN << endl;
//     cout << INT_MAX << endl
//          << INT_MIN << endl;
//     cout << LONG_LONG_MAX << endl
//          << ULLONG_MAX << endl;

//     cout << numeric_limits<int>::max() << endl;
//     cout << numeric_limits<float>::min() << endl;

//     cout << o << endl
//          << y << endl
//          << z << endl
//          << x << endl
//          << m << endl
//          << l << endl
//          << n << endl
//          << ch << endl
//          << ch2 << endl
//          << word << endl
//          << NAME << endl;

//     return 0;
// }

// #include <iostream>

// using namespace std;

// class Person
// {

// private:
//     int age = 0;

// public:
//     string first;
//     string second;

//     void PrintName()
//     {
//         cout << first << " " << second << endl;
//     }
//     Person(string x, string y, int z)
//     {
//         first = x;
//         second = y;
//         setAge(z);
//     }

//     int getAge()
//     {
//         return age;
//     }
//     void setAge(int x)
//     {

//         if (x < 0)
//         {
//             age = 0;
//         }
//         else if (x >= 100)
//         {
//             age = 100;
//         }
//         else
//         {
//             age = x;
//         }
//     }
// };

// class Embryo : public Person
// {
// public:
//     using Person::Person;
//     void birthed()
//     {
//         cout << "Umbilical cord removed";
//     }
// };

// int main()
// {
//     Embryo hamada("ahmed", "ahmed", -4);
//     hamada.PrintName();
//     hamada.birthed();

// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     string name1, name2;

//     cin >> name1 >> name2;

//     cout << (name1 > name2) << endl
//          << (name1 < name2) << endl
//          << (name1 >= name2) << endl
//          << (name1 <= name2) << endl
//          << (name1 == name2) << endl
//          << (name1 != name2) << endl;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main()
// {

//     bool x{2 != 0};
//     bool y{-1 !=0};
//     bool z(500);
//     bool l(-1000);
//     bool m = 2;
//     bool n = -2;

//     cout<<boolalpha<<x<<"\n"<<y<<"\n"<<z<<"\n"<<l<<"\n"<<m<<"\n"<<n<<endl;

//     return 0;
// }