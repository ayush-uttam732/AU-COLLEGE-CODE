// PROGRAM OF INFORMATION OF STUDENTS AND SCHOOLS USING MULTIPLE INHERITANCE .

#include<iostream>
using namespace std;
class student {
    private:
    int roll_no;
    string name;
    public:
    void get_student_info(int roll_no, string name) {
        cout<<"Roll No.: "<<roll_no<<endl;
        cout<<"Name: "<<name<<endl;
    }
};
class school {
    private:
    int school_id;
    string school_name;
    public:
    void get_school_info(int school_id, string school_name) {
        cout<<"School ID: "<<school_id<<endl;
        cout<<"School Name: "<<school_name<<endl;
    }
};

class information : public student, public school {

};
int main(){
    information info;
    info.get_student_info(1, "John Doe");
    info.get_school_info(101, "ABC School");
}