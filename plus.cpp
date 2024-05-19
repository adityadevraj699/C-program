#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a size of pattern :-"<<endl;
    cin>>n;

    for( int i=1;i<=2*n-1;i++)
    {
        for( int j=1;j<=2*n-1;j++)
        {
            if(i==n || j==n)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        cout<<endl;
    }
}