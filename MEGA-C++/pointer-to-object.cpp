#include<iostream>
using namespace std;
class rectangle{
    public:
    int l;
    int b;
    int area(){
        return l*b;
    }
    int perimeter(){
        return 2*(l+b);
    }
};
int main(){
    rectangle *p;
    p=new rectangle;
    rectangle *q=new rectangle();
    p->l=15;
    p->b=10;
    cout<<p->area()<<endl;
    cout<<p->perimeter();
    delete p;
    return 0;
}