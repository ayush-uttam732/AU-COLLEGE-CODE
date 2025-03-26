#include<iostream>
#include<stdio.h>
using namespace std;
class abc
{
    public:
    void hello();

};
void abc::hello()
{
    cout<<"hello how are you";
}
int  main(){
    abc a;
    a.hello();
}
