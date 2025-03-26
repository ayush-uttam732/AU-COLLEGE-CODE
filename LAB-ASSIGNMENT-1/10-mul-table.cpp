// 10=> C++ PROGRAM TO PRINT MULTIPLICATION TABLE OF A NUMBER.

#include<iostream>
using namespace std;
int main(){
    int n;
    int mul=0;
    cout<<"Enter the value of n : ";
    cin>>n;
    for(int i=1;i<=10;i++){
        mul=n*i;
        cout<<n<<" * "<<i<<" = "<<mul<<endl;

    }
    return 0;
}