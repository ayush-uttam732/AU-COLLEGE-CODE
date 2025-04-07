#include<iostream>
using namespace std;
class complex{
    private:
    int x,y;
    public:
    void get_data(int a,int b){
        x=a;
        y=b;
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
    complex c1,c2,c3;
    c1.get_data(2,4);
    c2.get_data(4,6);
    c3=c1+c2;
   
    c1.display();
    c2.display();
    c3.display();
    return 0;
 
}