#include<iostream>
using namespace std;
class A{
    public:
    int x;
    int y;
    A(){
        
    }
    A (const A & obj){
        x=obj.x+10;
        y=obj.y/5;
    }
    // A (const A & obj1 ){
    //     y=obj1.y+25;
    // }
};
int main(){
   A obj1,obj2;
   obj1.x=10;
   obj1.y=20;
   
   obj2.x=30;
   obj2.y=25;

//    A obj3(obj1);
   A obj3=obj2;

   cout<<obj1.x<< "  "<<obj1.y<<endl;
   cout<<obj2.x<<"   "<<obj2.y<<endl;
   cout<<obj3.x<<"  "<<obj3.y;

   return 0;

}