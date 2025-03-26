#include <iostream>
using namespace std;

class bank {
public:
    void choices() {
        cout << "MENU \n";
        cout << "1: Check balance \n";
        cout << "2: Credit balance \n";
        cout << "3: Debit balance \n";
        cout << "4: Exit \n";
    }

    float credit_balance(int total_bal, int credit_bal) {
        return total_bal + credit_bal;
    }

    float debit_balance(int total_bal, int debit_bal) {
        return total_bal - debit_bal;
    }

    int check_bal(int total_bal) {
        return total_bal;
    }
};

int main() {
    bank work;
    int TB = 345; // Initial Total Balance
    int CB;       // Credit Balance
    int DB;       // Debit Balance
    int choice;

    work.choices(); // Menu sirf ek baar print hoga

    do {
        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Your total balance is: " << work.check_bal(TB) << endl;
            break;

        case 2:
            cout << "Enter your credit amount: ";
            cin >> CB;
            TB = work.credit_balance(TB, CB); // Update TB
            cout << "Your total balance is: " << TB << endl;
            break;

        case 3:
            cout << "Enter your debit balance: ";
            cin >> DB;
            if (DB > TB) {
                cout << "Insufficient balance. Transaction failed!" << endl;
            } else {
                TB = work.debit_balance(TB, DB); // Update TB
                cout << "Your total balance is: " << TB << endl;
            }
            break;

        case 4:
            cout << "Exiting program. Thank you!" << endl;
            break;

        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}
