#include<iostream>
using namespace std;
class bank{
    public:
    string name;
    int account_number;
    int IFC;

    bank(string N, int AN,int ifc){
         N  =name;
         AN =account_number;
         IFC= ifc;
    }
void get_data();
void display_data();


};

void bank::get_data(){
   cout<<"Enter name : "<<endl;
   cin>>name;
   cout<<"Enter account number : "<<endl;
   cin>>account_number;
   cout<<"Enter ifc code : "<<endl;
   cin>>IFC;
}

void bank::display_data(){
    cout<<name;
    cout<<account_number;
    cout<<IFC;
}

int main(){
    string name;
    int account_number;
    int IFC;
    cout<<"Enter name : "<<endl;
   cin>>name;
   cout<<"Enter account number : "<<endl;
   cin>>account_number;
   cout<<"Enter ifc code : "<<endl;
   cin>>IFC;

bank s=bank(name ,account_number ,IFC );
void display_data();

}

