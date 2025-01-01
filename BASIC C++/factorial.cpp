//this program is to find factorial of any given number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"please input the number you want to know the factorial of";
    cin>>n;
    int factorial = 1; 
        
    

    for (int i = 2; i <=n; i++)
    {
        
        factorial = factorial*i;
    }
    
    cout<<"The factorial of" <<n<< "is "<<factorial<<endl;
    return 0;
}