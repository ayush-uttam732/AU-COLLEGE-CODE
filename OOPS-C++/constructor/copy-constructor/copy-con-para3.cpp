#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll;
    int age ;

    student(string N, int RN, int A){
        name=N;
        roll= RN;
        age=A;
    }

    student(const student & stu){
         name=stu.name;
         age=stu.age;
         roll=stu.roll;
    }

};

int main(){
    student obj("ayush " , 34 , 45 );
    cout<<obj.name<<endl<<obj.age<<endl<<obj.roll<<endl;
    student obj2(obj);
    cout<<obj2.name<<endl<<obj2.age<<endl<<obj2.roll<<endl;
    return 0;
}