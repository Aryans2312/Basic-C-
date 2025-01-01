//printing number between 0 and 1 but skipping number which are divisible by 3

#include<iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 101; i++)
    {
        if (i%3==0)
        {
            continue;
        }
        
        cout<<i<<endl;
    }
    
    return 0;
}