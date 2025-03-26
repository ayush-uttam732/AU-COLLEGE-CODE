// 18=>..c++ PROGRAM TO CALCULATE THE VOLUME OF CUBE CUBOID BY USING FUNCTION OVERLOADING..
                 
                 // BY USING CLASS......
#include<iostream>
using namespace std;

class vol{
    public:
    int volume(int s){
     cout<< s*s*s;
    };
    int volume(int l,int b,int h){
     cout<< l*b*h;
    };

};

int main(){
    int s;
    int l,b,h;
    vol cube,cuboid;

    cout<<"Enter the value of side of cube :";
    cin>>s;
    cube.volume(s);
    cout<<endl;

    cout<<"Enter the value of length,breadth and height :";
    cin>>l>>b>>h;
    cuboid.volume(l,b,h);

    return 0;

}
