// 13=> C++ PROGRAM TO CHECK WHETHER A NUMBER.

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
        sum=sum+(rem*rem*rem);
        n=n/10;
    }
    if(temp==sum){
        cout<<temp<<" : is the armstrong number ";
    }else{
        cout<<temp<<" : is not a armstrong number ";
    }
    return 0;
}