
//1=> C++ PROGRAM TO CHECK WHETHER A NUMBER IS POSITIVE ,NEGATIVE OR ZERO


#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number : \n ";
    cin >> n;
    if (n < 0){
        cout << "This is a negative number .\n";
    }

    else if (n > 0){
        cout << " This is a positive number \n ";
    }

    else{
        cout << "This is zero \n";
    }
    return 0;
}