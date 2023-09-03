#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string depositorName;
    int accountNumber;
    string accountType;
    double balance;

public:
    void assignValues(string name, int accNum, string accType, double initBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initBalance;
    }

    void depositAmount(double amount) {
        balance += amount;
        cout << "Amount deposited successfully." << endl;
    }

    void withdrawAmount(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Amount withdrawn successfully." << endl;
        } else {
            cout << "Insufficient balance. Withdrawal failed." << endl;
        }
    }

    void displayDetails() {
        cout << "Account Holder: " << depositorName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Balance: in INR : " << balance << endl;
    }
};

int main() {
    BankAccount account;
    account.assignValues("Sanskar Debnath", 2130401060, "Savings Account", 1000.0);

    account.displayDetails();

    account.depositAmount(569.0);
    account.displayDetails();

    account.withdrawAmount(69.0);
    account.displayDetails();

    account.withdrawAmount(690.0);
    account.displayDetails();

    return 0;
}

