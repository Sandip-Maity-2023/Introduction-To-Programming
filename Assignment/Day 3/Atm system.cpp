//
// Created by 12san on 23-09-2024.
//
#include  <iostream>
#include <string>

using namespace std;

class ATM {
private:
    string accountNo;
    string name;
    double balance;
    int pin;

public:
    void account(string ac, string n, double b, int p) {
        accountNo = ac;
        name = n;
        balance = b;
        pin = p;
    }

    int verify(int input) {
        return input == pin;
    }

    void Menu() {
        int choice;
        do {
            cout << "\n--- ATM Menu ---" << endl;
            cout << "1. View Balance" << endl;
            cout << "2. Withdraw" << endl;
            cout << "3. Transfer" << endl;
            cout << "4. Change PIN" << endl;
            cout << "5. Deposit" << endl;
            cout << "6. Exit" << endl;
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
                case 1:
                    view();
                    break;
                case 2:
                    handleWithdraw();
                    break;
                case 3:
                    handleTransfer();
                    break;
                case 4:
                    handleChangePin();
                    break;
                case 5:
                    handleDeposit();
                    break;
                case 6:
                    cout << "Exiting..." << endl;
                    break;
                default:
                    cout << "Invalid choice, please try again." << endl;
            }
        } while (choice != 6);  // Exit when user chooses option 6
    }

    void view() {
        cout << "\nAccount Number: " << accountNo << endl;
        cout << "Name: " << name << endl;
        cout << "Balance: " << balance << endl;
    }

    void deposit(double amount) {
        balance += amount;
        cout << "Amount deposited successfully. New balance: " << balance << endl;
    }

    void withdraw(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        }
    }

    void transfer(double amount) {
        if (amount > balance) {
            cout << "Insufficient funds." << endl;
        } else {
            balance -= amount;
            cout << "Transfer successful. New balance: " << balance << endl;
        }
    }

    void changePin(int newPin) {
        pin = newPin;
        cout << "PIN changed successfully." << endl;
    }

private:
    void handleWithdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        withdraw(amount);
    }

    void handleTransfer() {
        double amount;
        cout << "Enter amount to transfer: ";
        cin >> amount;
        transfer(amount);
    }

    void handleChangePin() {
        int newPin;
        cout << "Enter new PIN: ";
        cin >> newPin;
        changePin(newPin);
    }

    void handleDeposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        deposit(amount);
    }
};

int main() {
    ATM x;
    x.account("12345678", "Sandip Maity", 1000.0, 1234);

    int input;
    cout << "Enter your PIN: ";
    cin >> input;

    if (x.verify(input)) {
        cout << "PIN verified successfully." << endl;
        x.Menu();
    } else {
        cout << "Incorrect PIN. Access denied." << endl;
    }

    return 0;
}
