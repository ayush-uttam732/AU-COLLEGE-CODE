#include<iostream>
using namespace std;
class Add{
    private:
    int r,i;
    public:
    void get(int real,int imag){
        r=real;
        i=imag;
    }
    Add add_obj(Add &a){
        Add temp;
        temp.r=r+a.r;
        temp.i=i+a.i;
        return temp;
    }
    void display(){
        cout<<"Sum of two complex numbers is : "<<r<<"+"<<i<<"i";
    }
};
int main(){
    Add obj1,obj2,obj3;
    obj1.get(5,6);
    obj2.get(3,4);
    obj3=obj1.add_obj(obj2);
    // obj3.get(obj1.r+obj2.r,obj1.i+obj2.i);
    // cout<<"Sum of two complex numbers is : "<<obj3.r<<"+"<<obj3.i<<"i";
    obj3.display();
    return 0;
}