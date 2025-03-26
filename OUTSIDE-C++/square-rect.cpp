#include<iostream>
using namespace std;
class shape{
    float l,b;
    public:
    void area_square()
    {
        cout<<"Enter the value of length"<<endl;
        cin>>l;
        cout<<"Area of square is : "<<l*l<<endl;
    }
    void area_rectangle()
    {
        cout<<"Enter the value of length"<<endl;
        cin>>l;
        cout<<"Enter the value of breadth"<<endl;
        cin>>b;
        cout<<"Area of rectangle is : "<<l*b<<endl;
    }
    void permeter_square()
    {
        cout<<"Enter the value of length"<<endl;
        cin>>l;
        cout<<"Peremeter of square is : "<<l*4<<endl;
    }
    void peremeter_rectangle()
    {
        cout<<"Enter the value of l ";
        cin>>l;
        cout<<"Enter the value of b ";
        cin>>b;
        cout<<"The peremeter of rectangle is : " <<2*(l+b)<<endl;
    }
};

int main(){
    shape calculation;
    calculation.area_square();
    calculation.area_rectangle();
    calculation.permeter_square();
    calculation.peremeter_rectangle();

}