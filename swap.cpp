#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"enter 1st number :-";
    cin>>a;
    cout<<"enter 2nd number :-";
    cin>>b;

    cout<<"before swapping no. :-"<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;
    a=a+b;
    b=a-b;
    a=a-b;

    cout<<"after swapping no. :-"<<endl<<"a ="<<a<<endl<<"b ="<<b<<endl;



}