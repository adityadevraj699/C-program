#include<iostream>
using namespace std;
int main(){
    int n,a,i;
    cout<<"Enter a digit :-"<<endl;
    cin>>n;
    while(n>0){
       i=n%10;
       a+=i;
       n=n/10;
    }

    cout<<"total no. of digit :-"<<endl;
    cout<< a;
}