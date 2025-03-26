#include<iostream>
#include<conio.h>
using namespace std;
class bank{
    public:
    void choices(){
        cout<<"MENU \n";
        cout<<"1: Check balance \n ";
        cout<<"2: Credit balance \n ";
        cout<<"3: Debit balance \n ";
        cout<<"4: Exit \n\n";
        cout<<" Enter your choice \n ";
    }
    float credit_balance(int total_bal,int credit_bal){
        return total_bal+credit_bal;
    }
    float debit_balance(int total_bal,int debit_bal){
        return total_bal-debit_bal;
    }
    int check_bal(int total_bal){
        return total_bal;
    }

};

int main(){
    bank work;
    int TB=345;
    int CB;
    int DB;
    int choice;
    
    
    do{
        work.choices();
       cin>>choice;
       switch(choice) 
        
        {
            case 1:
            cout<<"Your total balance is :"<<work.check_bal(TB)<<endl<<endl;
            break;

            case 2:
            cout<<"Enter your credit amount : ";
            cin>>CB;
            cout<<"Your credit balance is : "<<TB<<endl;
            cout<<"Your total balance is "<<work.credit_balance(TB,CB)<<endl<<endl;
            TB=TB+CB;
            break;
            
            case 3:
            
            cout<<"enter your debit balance : ";
            cin>>DB;
            cout<<"Your debit balnce is : "<<DB<<endl;
            cout<<"Now your total balance is : "<<work.debit_balance(TB,DB)<<endl<<endl;
            TB=TB-DB; 
            break;

            case 4:
            break;

            default:
            cout<<"invalid choice "<<endl;
            
        }
    }
    while(choice!=4);
    return 0;
};