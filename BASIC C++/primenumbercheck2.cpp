//finding if a number is prime or not

#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"please enter the desired integer";
    cin>>n;
    bool flag = 0;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n%i==0)
        {
            cout<<"the declared integer is not a prime number";
            flag = 1;
            break;
        }
        
        if (flag==0)
        {
            cout<<"the desired integer is a prime number"<<endl;
            break;
        }

        return 0;
        
    }
    
}