// 16=> C++ PROGRAM TO CHECK WHETHER A NUMBER IS PALINDROME OR NOT.

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
    if(temp==sum){
        cout<<temp<<" : is the palindrome number ";
    }else{
        cout<<temp<<" : is not a palindrome number ";
    }
    return 0;
}