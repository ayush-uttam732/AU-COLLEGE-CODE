#include<iostream>
using namespace std;
class A{
    private:
    int x;
    int y;
    public:
    void get_data(int x,int y){
        cout<<"value of x is : "<<x<<endl;
        cout<<"value of y is : "<<y<<endl; 
    }

};
class B:public A{

};
int main(){
    B obj;
    obj.get_data(10,20);
    return 0;
}