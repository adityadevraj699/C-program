#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a size of element :-"<<endl;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0;j<(n-i);j++){
            cout<<"  -";
        }
        for(int j=0;j<(2*i-1);j++){
            cout<<"  "<<(char)('A'+j);
        }
       
        cout<<endl;
    }
    int space = 1;
    for( int i=1; i<n; i++)
    {
        for( int j=0; j<space; j++){
            cout<<"  -";
        }
        space++;
        for( int j=0; j<(2*(n-i)-1); j++){
            cout<<"  "<<(char)('A'+j);
        }
        cout<<endl;
    }
    
   
}