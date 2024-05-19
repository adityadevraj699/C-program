#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    cout<<"enter size of row :-"<<endl;
    cin>>n;
    cout<<"enter size of column :-"<<endl;
    cin>>m;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cout<<" * ";
        }
        cout<<endl;
    }


}