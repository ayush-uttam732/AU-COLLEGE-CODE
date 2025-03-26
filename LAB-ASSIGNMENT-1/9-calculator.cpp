// 9=> C++ PROGRAM TO MAKE A SIMPLE CALCULATOR.

#include<iostream>
using namespace std;
class calculate{
    public:
    void choices(){
        cout<<"  MENU  \n";
        cout<< "1: Add the number \n";
        cout<< "2: subtract the number \n";
        cout<< "3: Multiply the number \n";
        cout<< "4: module of the number \n";
        cout<< "5: exit \n";
    }
   void add(int num1,int num2 ){
        cout<< "sum is "<<num1+num2<<endl<<endl;
   }

   void sub(int num1,int num2){
        cout<< "Answer is :" <<num1-num2<<endl<<endl;
   }

   int mul(int num1, int num2){
        cout<<"Answer is : "<< num1* num2<<endl<<endl;
   }

   int module(int num1, int num2){
        cout<<"Answer is : "<< num1*num2<<endl<<endl;
   }

};

int main(){
    calculate fun;
    int A;
    int B;
    int choice;

    do{                          //  SELECTING THE CHOICES
        fun.choices();
        cout << "\n Enter your choices : ";
        cin >> choice;

        switch(choice){
            case 1:
            cout <<"Enter the value of num 1 and num 2\n ";
            cout <<"Enter first number  : ";
            cin>>A;
            cout <<"Enter Second number : "<<endl;
            cin>>B;

            fun.add(A,B);
            break;

            case 2:
            cout <<"Enter the value of num 1 and num 2\n ";
            cout <<"Enter first number  : ";
            cin>>A;
            cout <<"Enter Second number : "<<endl;
            cin>>B;

            fun.sub(A,B);
            break;


            case 3:
            cout <<"Enter the value of num 1 and num 2\n ";
            cout <<"Enter first number  : ";
            cin>>A;
            cout <<"Enter Second number : "<<endl;
            cin>>B;

            fun.mul(A,B);
            break;



            case 4:
            cout <<"Enter the value of num 1 and num 2\n ";
            cout <<"Enter first number  : ";
            cin>>A;
            cout <<"Enter Second number : "<<endl;
            cin>>B;

            fun.module(A,B);
            break;


            case 5:
            break;
            
        }
      
    }
      while(choice!=5);
      return 0;

}

