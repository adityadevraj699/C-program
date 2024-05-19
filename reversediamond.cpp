#include<iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;
   int space = 1;
    for( int i=1; i<=(n-1); i++)
    {
        for( int j=0; j<space; j++)
            cout<<"   -";
        space++;
        for( int j=0; j<(2*(n-i)-1); j++)
            cout<<"  "<<(char)('A'+j);
        cout<<endl;
    }
    cout<<endl;
}