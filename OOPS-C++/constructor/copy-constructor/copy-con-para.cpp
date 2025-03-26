#include<iostream>
using namespace std;
class A{
    public:
    int x;
    int y;

};
int main(){
    A obj;
    obj.x=6;
    obj.y=50;
    A obj2(obj);
    cout<<obj.x <<endl   ;
    cout<<obj2.x   ;
    return 0;
}