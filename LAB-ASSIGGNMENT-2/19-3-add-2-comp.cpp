// 19-3=>WRITE A PROGRAM TO ADD TWO COMPLEX NUMBERS USING CLASS AND OBJECTS.

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
    void display_no(){
        cout<<"The first complex number is: "<<real1<<" + "<<complex1<<"i"<<endl;
        cout<<"The second complex number is: "<<real2<<" + "<<complex2<<"i"<<endl;
        cout<<"The sum of the complex numbers is: "<<real1+real2<<" + "<<complex1+complex2<<"i"<<endl;
    }
};
int main(){
    cout<<"Enter the real and complex part of first number: ";
    int r1,com1,r2,com2;
    cin>>r1>>com1;
    cout<<"Enter the real and complex part of second number: ";
    cin>>r2>>com2;
    complex c(r1,com1,r2,com2);
    c.display_no();
    
}