#include<iostream>
using namespace std;
class Height
{
    int feet, inch;
    public:
    Height(int f,int i)
    {
        feet = f;
        inch = i;
    }
    void operator-(){
        feet --;
        inch --;
        cout<<"Feets and inches after decreament: "<<feet<<" "<<inch;
    }
};
int main()
{
    Height h1(6,10);
    -h1;
    return 0;
}