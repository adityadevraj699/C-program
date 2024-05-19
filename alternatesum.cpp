#include<iostream>
using namespace std;
int main(){
    int n,i,sum=0;
    cout<<"Enter a number series :- "<<endl;
    cin>>n;
    for(i=1;i<=n;i++){
        if (i%2==0){
            sum-=i;
        }
        else {
            sum+=i;
        }

    }
    cout<<"total alternate sum :-  "<<sum<<endl;
}