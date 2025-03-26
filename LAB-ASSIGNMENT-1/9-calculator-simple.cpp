// 9=> C++ PROGRAM TO MAKE A SIMPLE CALCULATOR.

#include<iostream>
using namespace std;
int main(){
    int num1,num2;
    char op;
    cout<<"Enter the operator (+,-,*,/,%): ";
    cin>>op;
    cout<<"Enter the two numbers : ";
    cin>>num1>>num2;
    switch (op){
        case '+':
            cout<<"Sum is : "<<num1+num2;
            break;
        case '-':
            cout<<"Subtraction is : "<<num1-num2;
            break;
        case '*':
            cout<<"Multiplication is : "<<num1*num2;
            break;
        case '/':
            cout<<"Division is : "<<num1/num2;
            break;
        case '%':
            cout<<"Module is : "<<num1%num2;
            break;
        default:
            cout<<"Invalid choice";
            break;            
    }
    return 0;
}