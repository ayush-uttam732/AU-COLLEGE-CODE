#include<iostream>
using namespace std;
class A{
    private:
    int a;
    int b;
    public:
    void get_data(int a ,int b){
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of b is : "<<b<<endl;
    }
};
class B:public A{
    private:
    int c;
    int d;
    public:
    void get_data1(int c,int d){
        cout<<"value of c is : "<<c<<endl;
        cout<<"value of d is : "<<d<<endl;
    }
};
class C:public B{
    int x;
    public:
    void display(){
        cout<<"value of x is :"<<x<<endl;
    }
    // Class C inherits from class B
};
int main(){
  C obj;
  obj.get_data(10,20);
  obj.get_data1(30,40);
  return 0;

}