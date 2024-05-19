#include<iostream>
using namespace std;
bool vote(int a){
    if (a>=18){
        
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int age;
    cout<<"Enter a age to check a eligiblity for Vote :- "<<endl;
    cin>>age;
    bool eligible=vote(age);
    if (eligible){
        cout<<"Person are eligible for vote"<<endl;
    }
    else {
        cout<<"Person are not eligible for vote"<<endl;
    }
    return 0;
   


}