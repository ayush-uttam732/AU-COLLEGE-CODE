#include<iostream>
using namespace std;
class A{
    // int a;
    // int b;
    // int c;
    int x;
    static int y;
    public:
    int get_data(int a){
        x=a;
    }
    int display(){
        cout<<x<<"    "<<y<<"    ";
    }
    static void display1(){
        cout<<y<<"    ";
    }                 



};
int A::y;
int main(){
    // int a,b,c;
    A obj1,obj2;
    obj1.get_data(27);
    obj1.display();
    obj1.display1(); 
    obj2.get_data(12);
    obj2.display();
    obj2.display1();
    // c=a+b;
    // obj1.get_data(27)+obj2.get_data(12);
    return 0;
}