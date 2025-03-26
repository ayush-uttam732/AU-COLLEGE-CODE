// 19=> WRITE A PROGRAM TO ADD TWO COMPLEX NUMBERS USING CLASS AND OBJECTS.

#include <iostream>
using namespace std;
class complex{
    int real1,real2,complex1,complex2;
    public:
    complex(int r1,int com1,int r2,int comp2){
        real1=r1;
        complex1=com1;
        real2=r2;
        complex2=comp2;
    }
    void add(){
        cout<<"The sum of the complex numbers is: "<<real1+real2<<" + "<<complex1+complex2<<"i"<<endl;
    }

};  
int main(){
    int r1,r2,com1,com2;
    cout<<"Enter the real and complex part of first number: ";
    cin>>r1>>com1;
    cout<<"Enter the real and complex part of second number: ";
    cin>>r2>>com2;
    complex c(r1,com1,r2,com2);
    c.add();
    return 0;
}  
