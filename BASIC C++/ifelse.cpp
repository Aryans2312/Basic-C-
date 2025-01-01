#include<iostream>
using namespace std;

int main(){


    int savings;
    cout<<" enter your savings" ;
    cin>>savings;

   if(savings>5000) {
      if(savings>10000) {              // this is the example of nested condition if under if
         cout<<"road trip with neha";
      } else {
      cout<<"shopping with nehaneha\n" ;
      }
   } else if (savings>2000) {     // this is the example of  it else if else condition its used mainly for three circumsatnces in genral way
    cout<<"rinki" ;
   } else {                        // this is simple example of if else used for simple if else programs
    cout<<"friends";
   }
}