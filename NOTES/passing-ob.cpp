#include<iostream>
using namespace std;
class A{
    public:
    int n=100;
    char ch='A';
    void disp(A a){
        cout<<a.n<<endl;
        cout<<a.ch<<endl;
    }
    void name(){
        cout<<"Ayush"<<endl;
    }
};
int main(){
    A a,b;
    a.disp(a);
    b.name();
    return 0;
}