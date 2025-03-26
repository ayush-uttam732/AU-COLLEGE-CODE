// 3=> PROGRAM TO CHECK WHETHER A CHARACTER IS VOVEL OR CONSTANT

#include <iostream>
using namespace std;
int main(){
    char ch;
    cout << "Enter the character : ";
    cin >> ch;
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
        cout << "This is a vovel .\n";
    }
    else{
        cout << "This is a constant .\n";
    }
    return 0;
}