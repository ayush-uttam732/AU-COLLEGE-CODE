#include<iostream>
using namespace std;
class student{
    public:
    int *ptr=new int[5];
};
int main(){
    student s;
    for(int i=0;i<5;i++){
        cout<<"Enter the value of "<<i+1<<" element"<<endl;
        cin>> s.ptr[i];
    }
    for(int i=0;i<5;i++){
        cout<<"The value of "<<i+1<<" element is "<<s.ptr[i]<<endl;
    }
    delete []s.ptr;
    
}
