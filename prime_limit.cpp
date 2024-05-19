#include<iostream>
using namespace std;
bool prime(int p){
    int i;
    for(i=2; i<=p;i++){
        if (p%i==0){
            break;
        }
    }
    if(p==i){
        return true;
    }
    else {
        return false;
    }
}
bool isprime(int p){
    int i;
    for(i=2;i*i<p;i++){
        if(p%i==0) {
            return false;
        }

    }
    return true;
}
int main(){
    int first,last;
    cout<<"Enter a two number limit to check a prime number between two number :- "<<endl;
    cin>>first>>last;

    for(int i=first; i<=last; i++){
        if(isprime(i)){
            cout<<" "<<i;
        }
    }
}