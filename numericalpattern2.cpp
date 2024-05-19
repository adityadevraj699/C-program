#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter a size :- "<<endl;
    cin>>n>>m;

    for(int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if ((i+j)%2==0){
                cout<<" 1 ";
            }
            else{
                cout<<" 2 ";
            }
            
        }
        cout<<endl;
    }
}