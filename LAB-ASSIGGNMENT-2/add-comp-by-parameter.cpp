#include<iostream>
using namespace std;
class add{
    private:
    int r1,r2,i1,i2;
    public:
    void get_data(int r1,int r2,int i1,int i){
         this->r1=r1;
        this->r2=r2;
        this->i1=i1;    
        this->i2=i;
    }
    void display_data(){
        cout<<"The first complex number is: "<<r1<<" + "<<i1<<"i"<<endl;
        cout<<"The second complex number is: "<<r2<<" + "<<i2<<"i"<<endl;
        cout<<"The sum of the complex numbers is: "<<(r1+r2)<<" + "<<(i1+i2)<<"i"<<endl;
    }
};
int main(){
    add c1;
    c1.get_data(1,2,3,4);
    c1.display_data();
    return 0;
}
    