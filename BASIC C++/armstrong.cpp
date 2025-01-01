//to check if a number is armstrong or not

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Please input the number you want to check ";
    cin>>n;
    int armstrong = 0;
    int realn = n;

    while (n>0)
    {
        int j;
        
        j = n%10;
        
        armstrong = armstrong + j*j*j;
        n = n/10;
        
    }

    if (realn==armstrong)
    {
        cout<<"given number is an armstrong number"<<endl;
    }
    else
    {
        cout<<"given number is not an armstrong number"<<endl;
    }
    

    

 
    
    return 0;
}

