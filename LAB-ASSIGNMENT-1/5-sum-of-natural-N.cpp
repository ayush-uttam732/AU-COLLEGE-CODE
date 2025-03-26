// 5=> PROGRAM TO CALCULATE THE SUM OF  NATURAL NUMBERS.

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cout<<"Enter the Nth number of natural number to calculate the sum : ";
    cin>>n;
    for(int i=1;i<=n;i++){
        sum=sum + i;
    }
    cout<<"Sum is :"<<sum;
    return 0;
}