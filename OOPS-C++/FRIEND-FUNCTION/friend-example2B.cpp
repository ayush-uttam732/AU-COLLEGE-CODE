//2=> FRIEND FUNCTION EXAMPLE 2 CREATE FRIEND CLASS .

#include<iostream>
using namespace std;
class A;
class B{
    public:
    void fun(A &obj);
};
class A{
    private:
    int pv=10;
    protected:
    int prov=20;
    public:
    // A(){
    //     pv=10;
    //     prov=20;
    // }
    friend void B::fun(A &obj);

};
void B::fun(A &obj){
    cout<<"value of a is :" <<obj.pv<<endl;
    cout<<"value of b is :" <<obj.prov<<endl;

}
int main(){
    B obj1;
    A obj2;
    obj1.fun(obj2);
    return 0;
}