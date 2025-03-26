#include<iostream>
#include<stdio.h>
using namespace std;
class bank
{
    int aNo;
    char accountHolder[10];
    char ifcCode[10];
    public:
    void get_account_data()
    {
      cout<<"Enter account number ";
      cin>>aNo;
      cout<<"Enter account holder " ;
      cin>>accountHolder;
      cout<<"Enter ifc code ";
      cin>>ifcCode;
    }
    void display_account_data()
    {
        cout<<aNo<<endl;
        cout<<accountHolder<<endl;
        cout<<ifcCode<<endl;
    }
} ;

int main(){
    bank data;
    data.get_account_data();
    data.display_account_data();
}
