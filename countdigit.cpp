#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter a digit :-"<<endl;
    cin>>n;
    while(n>0){
        n=n/10;
        a+=1;
    }

    cout<<"total no. of digit :-"<<endl;
    cout<< a;
}