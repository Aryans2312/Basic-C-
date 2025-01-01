//this program is to find factorial of any given number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"please input the number you want to know the factorial of";
    cin>>n;
    

    for (int i = 1; i <=n; i++)
    {
        int factorial; 
        factorial = 1;
        n = factorial*i;
        factorial = n;


    }
    
    cout<<"The factorial of n is "<<n<<endl;
    return 0;
}