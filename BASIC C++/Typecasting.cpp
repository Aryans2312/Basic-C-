//typecasting can be used for various reasons
//basically used to convert one form to other
// can help to get Ascii value

#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter the character for which u want to find the ASCII value"<<endl;
    cin>>ch;
    cout<<int(ch)<<endl;
    
    //similarly we can do the exact opposite we can find char value of integers
    int n;
    cout<<"Enter any integer"<<endl;
    cin>>n;
    cout<<char(n)<<endl;

    // we can also find the character with its ascii value
    
    char x = (char)n;
    cout<<x<<endl;

    return 0;
}