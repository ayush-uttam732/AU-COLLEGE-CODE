#include<iostream>
using namespace std;
class A{
    private:
    int a,b,c;
    public:
    void get_data(int x, int y,int z){
        a=x;
        b=y;
        c=z;
    };
    void display();
    friend void operator-(A &obj);
};
void A::display(){
    cout<<"The value of a is "<<a<<endl;
    cout<<"The value of b is "<<b<<endl;
    cout<<"The value of c is "<<c<<endl;
};
void operator-(A &obj){
    obj.a++;
    obj.b++;
    obj.c++;
};
int main(){
    A obj;
    obj.get_data(2,4,7);
    obj.display();
    -obj;
    obj.display();
    return 0;
}