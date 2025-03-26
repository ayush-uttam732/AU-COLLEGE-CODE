// 7=> C++ Program to Check Leap Year.

#include<iostream>
using namespace std;
int main(){
    int y;
    cout<<"Enter the year  : ";
    cin>>y;
    if(y%4==0){
        cout<<y<<" : is the leap year ";
    }else{
        cout<<y<<" : is not a leap year ";
    }
    return 0;
}