// checking if a number is prime or not

#include<iostream>
using namespace std;
int main()
{
    int j;
    cin>>j;
    int i;

    for ( i = 2; i <= j/2; i++)
    {
        if (j%i==0)
        {
            cout<<"its not a prime number"<<endl;
            break;
        }

    if (i==j/2)
    {
        /* code */
        cout<<"its a prime number"<<endl;
    }
        

        
        

        
    }
    return 0;
}