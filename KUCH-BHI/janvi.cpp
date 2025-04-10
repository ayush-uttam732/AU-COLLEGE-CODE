#include <iostream>
using namespace std;
class item
{
    public :
    int price;
    int id;
    static int count;
    void getdata();
    void displaydata();
    static void getcount();
    
};
int item::count=0;

void item::getdata()
{
cout<<"enter price of item : ";
cin>>price;
cout<<"enter the id of item: ";
cin>>id;
}
void item::displaydata()
{
    cout<<"price : "<<price<<endl;
    cout<<"id : "<<id<<endl;
    count++;
}
void item::getcount()
{
cout<<"the count is :"<<count;
}

int main() {
    item a1,a2,a3;
    a1.getdata();
    a1.displaydata();
    item::getcount;

    a2.getdata();
    a2.displaydata();
    item::getcount();

    a3.getdata();
    a3.displaydata();
    item::getcount();
    return 0;
}