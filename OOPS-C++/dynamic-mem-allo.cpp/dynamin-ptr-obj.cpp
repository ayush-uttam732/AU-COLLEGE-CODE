#include<iostream>
using namespace std;
int main(){
    int *ptr=new int[5];
    for(int i=0;i<5;i++){
        cout<<"Enter the value of "<<i+1<<" element"<<endl;
        cin>> ptr[i];
    }
    for(int i=0;i<5;i++){
        cout<<"The value of "<<i+1<<" element is "<<ptr[i]<<endl;
    }
    delete []ptr;
}