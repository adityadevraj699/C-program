#include<iostream>
using namespace std;
double area(int r){

    float total_area = 3.14*r*r;
    return total_area;

}
double circumference(int r){

    float total_circumference = 2*3.14*r;
    return total_circumference;

}
int main(){

    int radius;
    cout<<"Enter a radius of circle is :- "<<endl;
    cin>>radius;
    float total_area=area(radius);
    float total_circumference=circumference(radius);

    cout<<"Area of circle when radius "<<radius<<" is :-  "<<total_area<<endl;
    cout<<"circumference of circle when radius "<<radius<<" is :-  "<<total_circumference<<endl;

    return 0;
}