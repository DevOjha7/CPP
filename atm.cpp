#include <iostream>
using namespace std;

class ATM {
private:
    int balance;

public:
    ATM() {
        balance = 10000;
    }

    void checkBalance() {
        cout << "Balance: Rs 1" << balance << endl;
    }

    void deposit(int amt) {
        if (amt > 0) {
            balance += amt;
            cout << "Deposited: Rs " << amt << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw(int amt) {
        if (amt <= 0) {
            cout << "Invalid amount!" << endl;
        } else if (amt <= balance) {
            balance -= amt;
            cout << "Withdrawn: Rs " << amt << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }
};

int main() {
    ATM user;
    int choice = 0;
    int amount;

    while (choice != 4) {
        cout << "\nATM Menu:\n";
        cout << "1. Check Balance\n";
        cout << "2. Deposit\n";
        cout << "3. Withdraw\n";
        cout << "4. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            user.checkBalance();
        } else if (choice == 2) {
            cout << "Enter amount to deposit: ";
            cin >> amount;
            user.deposit(amount);
        } else if (choice == 3) {
            cout << "Enter amount to withdraw: ";
            cin >> amount;
            user.withdraw(amount);
        } else if (choice == 4) {
            cout << "Thank you for using the ATM!" << endl;
        } else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
