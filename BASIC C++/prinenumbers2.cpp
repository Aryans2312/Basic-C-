//to check prime numbers between 2 given numbers

#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"please enter the initial and final limit";
    cin>>a>>b;
    
   
   
    

    for ( int num = a; num <= b; num++)  
    {
        int i;
        for ( i = 2; i <num/2; i++)
        {
            if (num%i==0)
            {
                break;
            }
            if (i==num/2)
            {
                cout<<num<<endl;
            }
            
        }
        
    }
    

    
   
    

    
    return 0;
}