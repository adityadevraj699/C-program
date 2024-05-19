#include<iostream>
using namespace std;
int main(){
    int a,b,i,s=1;
    cout<<"Enter a number :- "<<endl;
    cin>>a>>b;
    for(i=1;i<=b;i++){
        s*=a;
        cout<<s<<endl;
             
    }
    cout<<"factorial of number is :-  "<<s<<endl;
}

