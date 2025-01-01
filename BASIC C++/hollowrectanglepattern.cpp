#include<iostream>
using namespace std;
int main()
{
    int row,columns;
    cout<<"Please tell the number of rows and columns";
    cin>>row>>columns;

    for (int i = 1; i < row; i++)
    {
        for (int j = 1;  j<=columns; j++)
        {
            if (i==1 || i==row)
            {
                cout<<"*";
            }
            
            else if (j==1 || j==columns)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
    
    return 0;
}