// PROGRAM OF TREE INHERITANCE OF A USER BASE CLASS ,BANK CLASS AND ACCOUNT CLASS GOODS OR SERVICES
#include<iostream>
using namespace std;
class user{
    protected:
    string name,email;
    int id;
    string address;
    string contact;
    string adhar_number;
    public:
    user(string n,string e,int i,string a,string c,string an){
        name=n;
        email=e;
        id=i;
        address=a;
        contact=c;
        adhar_number=an;
    }
};
class bank{
    protected:
    string bank_name, bank_address;
    public:
    bank(string bn,string ba){
        bank_name=bn;
        bank_address=ba;
    }

};
// class account

// class account:public user,public bank{