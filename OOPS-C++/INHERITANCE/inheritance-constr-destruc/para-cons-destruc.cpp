// inheriTANCE CLASS USING PARAMETERIZED CONSTRUCTORS AND DESTRUCTOR FUNCTION

#include<iostream>
using namespace std;
class base{
    public:
    int x;
    public:
    base(int x){
        cout<<"Base class constructor called "<<x<<endl;
        cout<<"x: "<<x<<endl;
    }
    ~base(){
        cout<<"Base class destructor called"<<endl;
    }
};
class drive:public base {
    public:
    int y;
    public:

    drive(int y,int x):base(x){
        cout<<"Drive class constructor called "<<y<<endl;
        cout<<"y: "<<y<<endl;
    }
    ~drive(){
        cout<<"Drive class destructor called"<<endl;
    }
    int value(int x,int y){
        cout<<x<<y<<endl;
    }
    
};
int main(){
    drive obj(10,20);
    obj.value(12,34);
    return 0;
}