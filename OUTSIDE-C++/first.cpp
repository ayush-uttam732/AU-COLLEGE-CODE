#include<iostream>
#include<stdio.h>
using namespace std;
class student
{
    int RN;
    char N[10];
    string MN;
    public:
    void student_data()
    {
        cout<<"enter roll no";
        cin>>RN;
        cout<<"enter name";
        cin>>N;
        cout<<"enter mo.no.";
        cin>>MN;
    }
    void display_student_data()
    {
        cout<<RN<<endl; 
        cout<<N<<endl;
        cout<<MN<<endl;
    }

};
int main(){
    student s;
    s.student_data();
    s.display_student_data();
}       