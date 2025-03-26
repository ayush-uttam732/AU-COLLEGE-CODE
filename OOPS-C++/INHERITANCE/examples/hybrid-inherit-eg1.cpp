#include<iostream>
using namespace std;
class A{
    public:
    int a;
    int b;
    public:
    void display(int a, int b){
        cout<<"a = "<<a<<endl;
        cout<<"b = "<<b<<endl;
    }
};
class B:public A{
};
class C:public B{
};
class D: public B,public C{

};
// int main(){
//     D obj;
//     obj.display(10,20);
//     return 0;
// }