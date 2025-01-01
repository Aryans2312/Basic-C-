//below code is to reverse a number

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"input the number to reverse it";
    cin>>n;

    int reverse_n;
    reverse_n = 0; 
    while (n>0)
    {
        int lastdigit = n%10;
        reverse_n = reverse_n*10 + lastdigit;
        n = n/10;
        continue;
    }


    cout<<"the reversed number is "<<reverse_n<<endl;
    


    return 0;
}
