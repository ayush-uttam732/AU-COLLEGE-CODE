//1-B => FRIEND FUNCTION SIMPLE WITHOUT USE CONSTRUCTOR...

#include<iostream>
using namespace std;
class A{
    private:
    int a=10;
    protected:
    int b=20;

    friend void friend_funtion(A & obj);
};
void friend_funtion(A & obj){
    cout<<"a is :"<<obj.a<<endl;
    cout<<"b is :"<<obj.b<<endl;
}
int main(){
    A obj1;
    friend_funtion(obj1);
    return 0;
}