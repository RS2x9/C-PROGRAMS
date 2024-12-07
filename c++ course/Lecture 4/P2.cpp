#include<iostream>
using namespace std;
int glow=100;
int main()
{
    int a=10; 
    int glow=200;
    int b=20;
    cout<<"The value of a is "<<a<<". The value of b is "<<b;
    cout<<"\n";   //  \n is used to create new line

    int c=50; int d=35;
    cout<<"The value of  c is :"<<c<<" \n The value of d is:"<<d<<"\n";
    cout<<"The value of glow :"<<glow; // local variable is taking priority here
    return 0;
}