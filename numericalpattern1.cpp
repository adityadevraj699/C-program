#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter a size of rectangle :-"<<endl;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for (int j=1;j<=m;j++){
            if(i==1 ||i==n || j==1 || j==m || i==j ||j==(m+1-i)){
                cout<<" "<<j;
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
}