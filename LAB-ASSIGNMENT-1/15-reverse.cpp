// 15=> C++ PROGRAM TO REVERSE A NUMBER.

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int temp;
    int rem;
    cout<<"Enter the number : ";
    cin>>n;
    temp=n;
    while(n>0){
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    cout<<"Reverse of the number is : "<<sum;
    return 0;
}