#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    int lcm=1;
    cout<<"Enter the value of n1 :";
    cin>>n1;
    cout<<"Enter the value of n2 :";
    cin>>n2;
    int x=n1;
    int y=n2;
    if(n1>n2){
        for(int i=2;i<=n1;i++){
            if(n1%i==0 || n2%i==0){
                do{
                if(n1%i==0){
                    lcm=lcm*i;
                    n1=n1/i;
                }else if(n2%i==0){
                    lcm=lcm*i;
                    n2=n2/i;
                }
                else{
                    lcm=lcm*i;
                    n1=n1/i;
                    n2=n2/i;
                }
            }
               while(n1!=1 & n2!=1)  ; 
            }             
        }
        cout<<"The LCM of "<<x<<" and "<<y<<" is "<<lcm;


    }else if(n2>n1){
        for(int i=2;i<=n2;i++){
            if(n1%i==0 || n2%i==0){
                do{
                if(n1%i==0){
                    lcm=lcm*i;
                    n1=n1/i;
                }else if(n2%i==0){
                    lcm=lcm*i;
                    n2=n2/i;
                }
                else{
                    lcm=lcm*i;
                    n1=n1/i;
                    n2=n2/i;
                }
                }
               while(n1!=1 & n2!=1)  ; 
            } 
            
        }
            cout<<"The LCM of "<<x<<" and "<<y<<" is "<<lcm;
    }


    else{
        for(int i=2;i<=n1;i++){
            if(n1%i==0 & n2%i==0){
                do{
                lcm=lcm*i;
                n1=n1/i;
                n2=n2/i;
                }
                while (n1!=1 & n2!=1);   
                
            }
    
        }
        cout<<"The LCM of "<<x<<" and "<<y<<" is "<<n1;
    }
    return 0;
}