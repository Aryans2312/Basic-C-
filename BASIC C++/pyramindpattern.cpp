#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Please input the numbers of lines";
    cin>>n;

    for (int i = n; i >= 1; i--)
    {
        for (int j =1; j<=i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}