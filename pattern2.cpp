#include<iostream>
using namespace std;
int main(){
    int n,m;
     cout<<"enter size of row :-"<<endl;
    cin>>n;
    cout<<"enter size of column :-"<<endl;
    cin>>m;
    for( int i=1;i<=n;i++){
        for( int j=1;j<=m;j++){
            if (i==1 || i==n || j==1 || j==m){
                cout<<" * ";
            }
            else {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}