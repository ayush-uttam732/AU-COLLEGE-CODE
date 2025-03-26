#include<iostream>
using namespace std;
class A{
    private:
    int x;
    int y;
    public:
    A(int X,int Y){
        x=X;
        y=Y;

        cout<<x<<"  "<<endl;
        cout<<y<<"  "<<endl;
    }

};
int main(){
    A obj1=A(10,20);
    A obj2(20,40);
    return 0;

}