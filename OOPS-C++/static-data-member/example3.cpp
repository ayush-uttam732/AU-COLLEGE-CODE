#include<iostream>
using namespace std;

class BCA{
    int rollNumber;
    string name;
    static char section;
    public:
    void get_data(){
        cout<<"Enter the roll number of student :";
        cin>>rollNumber;
        cout<<"Enter the name of student :";
        cin>>name;
        cout<<endl<<endl;
        section='A';
    };
    void display_data(){
        cout<<"Roll number of student :"<<rollNumber<<endl;
        cout<<"Name of student :"<<name<<endl;
        cout<<"Section of student :"<<section<<endl<<endl<<endl;
    };
};
char BCA::section;

int main(){
    int n;
    cout<<"HOW MANY STUDENTS DATA YOU WANT TO ENTER :  ";
    cin>>n;
    cout<<endl<<endl;
    BCA obj[n];
    for(int i=0;i<n;i++){
        cout<<"ENTER THE DATA OF STUDENT "<<i+1 <<" : "<<endl<<endl;
        obj[i].get_data();
    }
    for(int i=0;i<n;i++){
        cout<<"DATA OF STUDENT "<<i+1<<" : "<<endl<<endl;
        obj[i].display_data();
    }
    return 0;
}    