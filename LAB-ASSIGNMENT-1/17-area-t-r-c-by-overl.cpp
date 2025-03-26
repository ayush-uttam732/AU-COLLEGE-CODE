//c++ program to calculate the are of circle , rectaangle and triangle by using function overloading ....

#include<iostream>
using namespace std;

int area(int r){
   return 3.14*r*r;
}
int area(int l, int b){
    cout<< l*b;
}
float area(float ba,float h){
    return (ba*h)/2;
}

int main(){
    int r,l,b;
    float ba,h;

    cout<<"CALCULATING AREA OF CIRCLE "<<endl;
    cout<<"Enter the value of r :";
    cin>>r;
    cout<<area(r);
    
    cout<<endl;

    cout<<"CALCULATING AREA OF RECTANGLE "<<endl;
    cout<<"Enter the value of l and b: ";
    cin>>l>>b;
    area(l,b);
    cout<<endl;

    cout<<"CALCULATING AREA OF TRIANGLE "<<endl;
    cout<<"Enter the value of base and height :";
    cin>>ba>>h;
    cout<<area(ba,h);
    return 0;

}
