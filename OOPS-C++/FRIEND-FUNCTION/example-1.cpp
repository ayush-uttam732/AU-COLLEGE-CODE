//1=> FRIEND FUNCTION EXAMPLE 1 

#include<iostream>
using namespace std;
class A{
    private:
    int pv;
    protected:
    int prov;
    public:
    A(){
        pv=10;
        prov=20;
    }
    friend void friend_function(A & obj);
};
void friend_function(A & obj){
    cout<<obj.pv<<endl;
    cout<<obj.prov<<endl;

}
int main(){
    A obj1;
    friend_function(obj1);
    return 0;
}