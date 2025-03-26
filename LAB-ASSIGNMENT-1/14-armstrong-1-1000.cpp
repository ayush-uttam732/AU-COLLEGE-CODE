// 14=> C++ PROGRAM TO DISPLAY ARMSTRONG NUMBER BETWEEN 1 TO 1000.

#include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    int temp;
    int rem;
    for(int i=1;i<=1000;i++){
        n=i;
        temp=n;
        sum=0;
        while(n>0){
            rem=n%10;
            sum=sum+(rem*rem*rem);
            n=n/10;
        }
        if(temp==sum){
            cout<<temp<<" : is the armstrong number \n";
        }
    }
    return 0;
}