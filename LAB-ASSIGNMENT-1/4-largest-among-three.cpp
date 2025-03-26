// 4=> PROGRAM TO FIND THE LARGEST AMONG THREE NUMBERS

#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the value of x : ";
    cin>>x;
    cout<<"Enter the value of y : ";
    cin>>y;
    cout<<"Enter the value of z : ";
    cin>>z;
    if(x>y & x> z){
        cout<<"The greater number is :",cout<<x;
    }
    else if(y>x & y>z){
        cout<<"The greater number is : ",cout<<y;
    }
    else if(z>y & z>x){
        cout<<"The greater number is : ",cout<<z;
    }else{
        cout<<x<<", "<<y<<" , "<<z<<" : are equal";
    }
    return 0;
}