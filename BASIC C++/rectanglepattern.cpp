//code to gets star in a rectangle pattern
#include<iostream>
using namespace std;
int main()
{
    int row, column;
    cout<<"Give the number of rows and columns";
    cin>>row>>column;
     
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= column; j++)
        {
            cout<<"*";
        }
        //endl is using for line break
        cout<<endl;
       
    }
    
    return 0;
}