#include<iostream>
using namespace std;
class add_comp{
    private:
    int r1,r2,i1,i2;
    public:
    // add_comp(int x,int y,int z,int w){
    //     r1=x;
    //     r2=y;
    //     i1=z;
    //     i2=w;
    // }
    void set_data(){
        cout<<"Enter real part of first complex number: ";
        cin>>r1;
        cout<<"Enter imaginary part of first complex number: ";
        cin>>i1;
        cout<<"Enter real part of second complex number: ";
        cin>>r2;
        cout<<"Enter imaginary part of second complex number: ";
        cin>>i2;
    }
    void display_data(){
        cout<<"The first complex number is: "<<r1<<" + "<<i1<<"i"<<endl;
        cout<<"The second complex number is: "<<r2<<" + "<<i2<<"i"<<endl;
        cout<<"The sum of the complex numbers is: "<<r1+r2<<" + "<<i1+i2<<"i"<<endl;
    }
};
int main(){
    add_comp obj;
    obj.set_data();
    obj.display_data();
    return 0;
}