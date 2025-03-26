// 8=> C++ PROGRAM TO FIND FACTORIAL OF A NUMBER.

#include<iostream>
using namespace std;
int main(){
    int n;
    int fact=1;
    cout<<"Enter the value of n : ";
    cin>>n;
    if(n==0){
        cout<<"Factorial of 0 is 1 ";
    }else{
        for(int i=1;i<=n;i++){
            fact=fact*i;
        }
        cout<<"Factorial of "<<n<<" is : "<<fact;
    }
    return 0;
}