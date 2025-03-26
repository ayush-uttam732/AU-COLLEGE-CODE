#include<iostream>
using namespace std;
class A{
    public:
    int x;
    static int z;
};
int A::z=10;
int main(){
    A obj1,obj2;
    obj1.x=20;
    obj2.x=10;
    cout<<obj1.x<<endl;
    cout<<obj2.x<<endl;
    cout<<obj1.z<<endl;
    cout<<obj2.z<<endl;
    cout<<A::z;
}