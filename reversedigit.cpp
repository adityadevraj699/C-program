#include<iostream>
using namespace std;
int main(){
    int n,a=0,i;
    cout<<"Enter a digit :-"<<endl;
    cin>>n;
    while(n>0){
       i=n%10;
       a=a*10+i;
       n=n/10;
    }

    cout<<"total no. of digit :-"<<endl;
    cout<< a;
}