// MULTIPLE INHERITANCE USING DEFAULT CONSTRUCTORS AND DESTRUCTORS .

#include<iostream>
using namespace std;

class base{
    public:
    base(){
        cout<<"Base class constructor called"<<endl;
    }
    ~base(){
        cout<<"Base class destructor called"<<endl;
    }
};
class drive:public base{
    public:
    drive(){
        cout<<"Drive class constructor called"<<endl;
    }
    ~drive(){
        cout<<"Drive class destructor called"<<endl;
    }
};
int main(){
    drive obj;
    return 0;
}