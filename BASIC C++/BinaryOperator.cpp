#include<iostream>
using namespace std;
class Height
{
    public:
    int feet, inch;
    Height()
{
    
    feet=0;
    inch=0;
}
    Height(int f,int i)
    {
        feet = f;
        inch = i;
    }
    
    Height operator+(Height& obj)
    {
        Height res;
        res.feet = feet+obj.feet;
        res.inch = inch+obj.inch;

        return res;
    }

};

int main(){
    Height h3;
    Height h1(5,1);
    Height h2(6,1);
    h3 = h1+h2;
    cout<<h3.feet<<" "<<h3.inch;
    return 0 ;
}