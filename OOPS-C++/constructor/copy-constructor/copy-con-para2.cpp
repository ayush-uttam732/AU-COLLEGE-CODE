#include<iostream>
using namespace std;
class A{
    
    public:
    int x;
    string y;
    A(string i, int j){
        y=i;
        x=j;
    }
    A(const A & B){
        x=B.x;
        y=B.y;
    }
};

int main(){
    A obj("aman",45);
    cout << obj.x<<endl<<obj.y<<endl;
    A obj2=obj;
    cout << obj2.x<<endl<<obj2.y<<endl;
    return 0;
    
}