#include<iostream>
using namespace std;
bool odd(int odd){
    if(odd%2!=0){
        return true;
    }
    else {
        return false;
    }
    
}
int main(){

    int a,limit;
    cout<<"Enter a limit of number to print a ODD number :- "<<endl;
    cin>>a>>limit;
    cout<<"Total odd number is :- "<<endl;
    for(int i=a;i<=limit;i++){
       if (odd(i)){
        cout<<" "<<i;
       }

    }
    cout<<endl;

    cout<<"Total even number is :- "<<endl;
    for(int i=a;i<=limit;i++){
       if (!odd(i)){
        cout<<" "<<i;
       }

    }
    cout<<endl;


    return 0;
}