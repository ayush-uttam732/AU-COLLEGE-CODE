#include<iostream>
// #include<stdio.h>
using namespace std;
class classbook
{
    string ISBN;
    char title[10];
    char author[10];
    char pubName[10];
    int price;
    public:
    void get_classbook_data()
    {
        cout<<"Enter ISBN number ";
        cin>>ISBN;
        cout<<"Enter book title ";
        cin>>title;
        cout<<"Enter author name ";
        cin>>author;
        cout<<"Enter publisher name ";
        cin>>pubName;
        cout<<"Enter price ";
        cin>>price;
    }
    void display_data()
    {
        cout<<ISBN<<endl;
        cout<<title<<endl;
        cout<<author<<endl;
         cout<<pubName<<endl;
        cout<<price<<endl;

    }

};

int main(){
    classbook b;
    b.get_classbook_data();
    b.display_data();
}