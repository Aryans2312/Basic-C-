///**NOTE:- below code is for the mirror image of the normal pyramid not for the 180 degree turn//
 //there is another file for 180 degree pyramind**//


#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"Please input the numbers of lines";
    cin>>n;

    for (int i = 1; i <= n; i++)
    {
        for (int j =1; j<=i; j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    
    return 0;
}