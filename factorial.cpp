#include<iostream>
using namespace std;
int main(){
    int n,i,s=1;
    cout<<"Enter a number :- "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        s=s*i;
        cout<<s<<endl;
             
    }
    cout<<"factorial of number is :-  "<<s<<endl;
}