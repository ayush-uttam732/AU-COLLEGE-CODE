// 12=>C++ PROGRAM TO FIND LCM OF TWO NUMBERS.

#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int lcm;
    cout<<"Enter the value of n1 ";
    cin>>n1;
    cout<<"Enter the value of n2 ";
    cin>>n2;
    for(int i=2;i;i++){
        if(i%n1==0 && i%n2==0){
            lcm=i;
            cout<<"LCM is :"<<lcm;
            break;
        }    
    }
    
    return 0;
}