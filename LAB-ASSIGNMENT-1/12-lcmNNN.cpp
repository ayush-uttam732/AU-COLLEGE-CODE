#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int lcm=1;
    cout<<"Enter the value of n1 :";
    cin>>n1;
    cout<<"Enter the value of n2 :";
    cin>>n2;
    if(n1>n2){
        for(int i=2;i<=n1;i++){
            if(n1%i==0 || n2%i==0){
                
                
            }
            

        }
        cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<lcm;
    }else if(n2>n1){
        for(int i=2;i<=n1;i++){
            if(n1%i==0 & n2%i==0){
                lcm=i;
                break;
            }
        }
        cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<lcm;
    }
    else{
        for(int i=2;i<=n1;i++){
            if(n1%i==0 & n2%i==0){
                lcm=i;
                break;
            }
            break;
        }
        cout<<"The LCM of "<<n1<<" and "<<n2<<" is "<<n1;
    }
    return 0;
}