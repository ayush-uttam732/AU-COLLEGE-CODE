#include<iostream>
using namespace std;
class A{
    private:
    int a;
    int b;
    int c;
    string name;

    public:
    void get_data(int a,string name){
        cout<<"value of a is : "<<a<<endl;
        cout<<"value of name is : "<<name<<endl;
    }
    void b_and_c(int b , int c){
        cout<<"value of b is : "<<b<<endl;
        cout<<"value of c is : "<<c<<endl;
    }

    
};
class B:public A{

};
class C:public A{

};
int main(){
    B objb;
    C objc;
    objb.b_and_c(19,34);
    objc.get_data(23,"anand");
    return 0;
    
}