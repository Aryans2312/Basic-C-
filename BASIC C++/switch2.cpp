#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"input two numbers";
    cin>>a>>b;

    char op;
    cout<<"input the operator";
    cin>>op;

    switch (op)
    {
    case '*':
        cout<<"The answer is"<<endl;
        cout<<a*b<<endl;
        break;
    
    case '+':
        cout<<"The answer is"<<endl;
        cout<<a+b<<endl;
        break;
    
    case '-':
        cout<<"The answer is"<<endl;
        cout<<a-b<<endl;
        break;

    case '%':
        cout<<"The answer is"<<endl;
        cout<<a%b<<endl;
        break;
    
    case '/':
        cout<<"The answer is"<<endl;
        cout<<a/b<<endl;
        break;

   
    
    default:
    cout<<"ENTER A VALID OPERATOR"<<endl;
        break;
    }
    return 0;
}