#include <iostream>
#include <string>

using namespace std;

int main(){

    string s1,s2;
    string vowels ="aeiouAEIOU";
    int vCount=0;

    // Reverse String
    cout<<"Enter a word: ";cin>>s1;
    for(int i=s1.length()-1;i>=0;i--){
        s2+=s1[i];
    }
    cout<<"The reversed string: "<<s2<<endl;

    // Check Vowels
    for(int i=0;i<s1.length();i++){
        if(vowels.find(s1[i])!= string::npos){
            vCount++;
        }
    }
    cout<<"The vowels' count is: "<<vCount<<endl;
    // Plindrome
    cout<<(s1==s2?"Palindrome":"Not Palindome")<<endl;

    return 0;
}