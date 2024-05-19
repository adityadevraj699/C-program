#include<iostream>

int square(int number){
    int square= number*number;
    return square;
    
}
using namespace std;
int main(){
    int n,s;
    cout<<"Enter a Number to find nature no. square :- "<<endl;
    cin>>n;

    for(int i=1;i<=n;i++){

        s=square(i);
        cout<<"the squere "<<i<<" is :-  "<<s<<endl;

    }
    
    

}