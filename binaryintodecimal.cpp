#include<iostream>
using namespace std;
int main(){
    int n,i,ans=0,power=1,dec=0,ten=1;
    cout<<"entera binary number :- "<<endl;
    cin>>n;
    while(n>0){
        int lastdigit=n%10;
        ans+=(lastdigit*power);
        power*=2;
        n=n/10;
        
    }
    cout<<ans<<endl;

    cout<<"decimal digit :-"<<endl;
    while(ans>0){
        int paritydigit=ans%2;
        dec+=ten*paritydigit;
        ten*=10;
        ans=int(ans/2);

    }
    cout<<dec<<endl;
}