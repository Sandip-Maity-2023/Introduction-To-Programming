// Created by 12san on 17-08-2024.

/*
ALGORITHM
 1. Create account
 2. Deposit
 3. Withdraw
 4. Payment(Transfer Money )
 5. check account
 6. Login
 7. Transaction details
 8. Display Details

 */
#include "Project 07 Bank Management system.h"
#include<stdio.h>

#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

const int MAX_ACCOUNTS = 100;  // Maximum number of accounts

class Account {
        private:
        int accountNumber;
        string accountHolderName;
        double balance;

        public:
        Account() : accountNumber(0), balance(0.0) {}  // Default constructor

        Account(int accNumber, string accHolderName, double initialBalance = 0.0) {
            accountNumber = accNumber;
            accountHolderName = accHolderName;
            balance = initialBalance;
        }

        int getAccountNumber() const {
            return accountNumber;
        }

        string getAccountHolderName() const {
            return accountHolderName;
        }

        double getBalance() const {
            return balance;
        }

        void deposit(double amount) {
            if (amount > 0) {
                balance += amount;
                cout << "Deposit successful. New balance: " << balance << endl;
            } else {
                cout << "Invalid deposit amount!" << endl;
            }
        }

        void withdraw(double amount) {
            if (amount > 0 && amount <= balance) {
                balance -= amount;
                cout << "Withdrawal successful. New balance: " << balance << endl;
            } else {
                cout << "Insufficient balance or invalid amount!" << endl;
            }
        }

        void displayAccount() const {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder: " << accountHolderName << endl;
            cout << "Balance: " << balance << endl;
        }

        void setAccount(int accNumber, string accHolderName, double initialBalance) {
            accountNumber = accNumber;
            accountHolderName = accHolderName;
            balance = initialBalance;
        }
};

class Bank {
        private:
        Account accounts[MAX_ACCOUNTS];
        int nextAccountNumber;
        int accountCount;

        public:
        Bank() : nextAccountNumber(1001), accountCount(0) {}

        void createAccount() {
            if (accountCount >= MAX_ACCOUNTS) {
                cout << "Bank is full. Cannot create more accounts." << endl;
                return;
            }

            string name;
            double initialDeposit;

            cout << "Enter Account Holder Name: ";
            cin.ignore();  // Ignore any newline left in the input buffer
            getline(cin, name);
            cout << "Enter Initial Deposit Amount: ";
            cin >> initialDeposit;

            accounts[accountCount].setAccount(nextAccountNumber++, name, initialDeposit);
            cout << "Account created successfully. Account Number: " << accounts[accountCount].getAccountNumber() << endl;
            accountCount++;
        }

        void deposit() {
            int accNumber;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNumber;
            cout << "Enter Deposit Amount: ";
            cin >> amount;

            for (int i = 0; i < accountCount; i++) {
                if (accounts[i].getAccountNumber() == accNumber) {
                    accounts[i].deposit(amount);
                    return;
                }
            }
            cout << "Account not found!" << endl;
        }

        void withdraw() {
            int accNumber;
            double amount;
            cout << "Enter Account Number: ";
            cin >> accNumber;
            cout << "Enter Withdrawal Amount: ";
            cin >> amount;

            for (int i = 0; i < accountCount; i++) {
                if (accounts[i].getAccountNumber() == accNumber) {
                    accounts[i].withdraw(amount);
                    return;
                }
            }
            cout << "Account not found!" << endl;
        }

        void displayAccountInfo() const {
            int accNumber;
            cout << "Enter Account Number: ";
            cin >> accNumber;

            for (int i = 0; i < accountCount; i++) {
                if (accounts[i].getAccountNumber() == accNumber) {
                    accounts[i].displayAccount();
                    return;
                }
            }
            cout << "Account not found!" << endl;
        }

        void listAccounts() const {
            if (accountCount == 0) {
                cout << "No accounts to display." << endl;
                return;
            }

            cout << setw(15) << "Account Number" << setw(20) << "Account Holder" << setw(15) << "Balance" << endl;
            cout << "-------------------------------------------------------------" << endl;
            for (int i = 0; i < accountCount; i++) {
                cout << setw(15) << accounts[i].getAccountNumber()
                     << setw(20) << accounts[i].getAccountHolderName()
                     << setw(15) << accounts[i].getBalance() << endl;
            }
        }
};

int main() {
    Bank bank;
    int choice;

    do {
        cout << "\n=== Bank Management System ===" << endl;
        cout << "1. Create Account" << endl;
        cout << "2. Deposit" << endl;
        cout << "3. Withdraw" << endl;
        cout << "4. Display Account Info" << endl;
        cout << "5. List All Accounts" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                bank.createAccount();
                break;
            case 2:
                bank.deposit();
                break;
            case 3:
                bank.withdraw();
                break;
            case 4:
                bank.displayAccountInfo();
                break;
            case 5:
                bank.listAccounts();
                break;
            case 6:
                cout << "Exiting program. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    } while (choice != 6);

    return 0;
}
