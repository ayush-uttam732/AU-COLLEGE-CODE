#include<iostream>
using namespace std;
class complex{
    private:
    int x,y;
    public:
    
    
    complex(int a,int b){
        x=a;
        y=b;
    };
    complex(){
        x=0;
        y=0;
    };
    void display(){
        cout<<x<<"+"<<y<<"i"<<endl;
    };
    complex operator+(complex c);
};
complex complex::operator+(complex c){
     complex temp;
     temp.x=x +c.x;
     temp.y=y +c.y;
     return temp;
};
int main(){
    complex c1(2,4);
    complex c2(4,6);
    complex c3=c1+c2;
    c1.display();
    c2.display();
    c3.display();
    return 0;

}
