// INITIALIZATION LIST 

#include<iostream>
using namespace std;
class A{
    private:
    int x;
    public:
    A(int X):x(X){}
    void display(){
        cout<<"value of x :"<<x;
    }
    
};
int main(){
    A obj=A(10);
    obj.display();
    return 0;
}