#include<iostream>
using namespace std;
class student{
    public:
    int x;
    int y;
    student(){

    };

    student(student & B){
         x=B.x;
         y=B.y; 
    }
};

int main(){
    student obj;
    obj.x=4;
    obj.y=5;
    cout<<obj.x <<endl<<obj.y<<endl;
    student obj2(obj);
     cout<<obj2.x <<endl<<obj.y<<endl;

    return 0;

}