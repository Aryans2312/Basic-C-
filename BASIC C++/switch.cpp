#include<iostream>
using namespace std;
int main()
{
    char button;
    cout<<"Please enter any butter from a , b, c ,  d, e "<<endl;
    cin>>button;

    switch (button)
    {
    case 'a':
        cout<<"hello"<<endl;
        break;
    
    case 'b':
        cout<<"namaste"<<endl;
        break;

    case 'c':
        cout<<"hola amigo"<<endl;
        break;

    case 'd':
        cout<<"ciao"<<endl;
        break;

    case 'e':
        cout<<"visca catalunya"<<endl;
        break;
    default:
    cout<<"i am still learning more languages"<<endl;
        break;
    }


    return 0;

}