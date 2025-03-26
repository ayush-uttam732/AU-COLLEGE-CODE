#include <iostream>
using namespace std;

// Base Class: User
class User {
protected:
    string name;
    string aadhaarNumber;
    string mobileNumber;
    string address;

public:
    User(string n, string a, string m, string ad) : name(n), aadhaarNumber(a), mobileNumber(m), address(ad) {}

    void displayUserInfo() const {
        cout << "Name: " << name << "\nAadhaar: " << aadhaarNumber
             << "\nMobile: " << mobileNumber << "\nAddress: " << address << endl;
    }
};

// Derived Class: BankUser
class BankUser : public User {
private:
    string accountNumber;
    double balance;

public:
    BankUser(string n, string a, string m, string ad, string acc, double bal)
        : User(n, a, m, ad), accountNumber(acc), balance(bal) {}

    void checkBalance() const {
        cout << "Account Number: " << accountNumber << "\nBalance: " << balance << " INR\n";
    }
};

// Derived Class: GovtUser
class GovtUser : public User {
private:
    string panNumber;
    string voterID;

public:
    GovtUser(string n, string a, string m, string ad, string pan, string voter)
        : User(n, a, m, ad), panNumber(pan), voterID(voter) {}

    void accessGovtService() const {
        cout << "Accessing Government Service with PAN: " << panNumber
             << " and Voter ID: " << voterID << endl;
    }
};

// Main Function
int main() {
    // Create a Bank User
    BankUser bankUser("Rahul Sharma", "1234-5678-9012", "9876543210", "Delhi, India", "ACC12345", 50000.0);
    
    // Create a Govt User
    GovtUser govtUser("Rahul Sharma", "1234-5678-9012", "9876543210", "Delhi, India", "PAN12345", "VOTER67890");

    cout << "\n=== Bank User Info ===\n";
    bankUser.displayUserInfo();
    bankUser.checkBalance();

    cout << "\n=== Govt User Info ===\n";
    govtUser.displayUserInfo();
    govtUser.accessGovtService();

    return 0;
}
