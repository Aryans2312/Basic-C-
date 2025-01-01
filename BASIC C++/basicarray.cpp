#include<iostream>
using namespace std;
int main()
{
    int A[5];
    A[0] = 1;
    A[1] = 10;
    A[2] = 12;
    A[3] = 23;
    A[4] = 45;
    int B[5] = {1,2,3,4,5};
    cout<<A[0]<<endl;
    cout<<A[1]<<endl;
    cout<<A[2]<<endl;
    cout<<A[3]<<endl;
    cout<<A[4]<<endl;
    for (int i = 0; i < 5; i++)
    {
        cout<<B[i]<<endl;
    }
    

    return 0;
}