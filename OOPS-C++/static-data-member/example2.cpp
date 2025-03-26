#include<iostream>
using namespace std;
class A{
    int x;
    static int z;
    public:
    void get_data(){
        cout<<"Enter the value of x :";
        cin>>x;
        z=15;
    };
    void display_data(){
        cout<<x<<endl;
        cout<<z<<endl;
    };
};

int A::z;
int main(){
     A obj1,obj2;
     obj1.get_data();
     obj2.get_data();
     obj1.display_data();
     obj2.display_data();
     return 0;

}