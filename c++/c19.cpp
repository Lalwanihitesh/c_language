#include <iostream>
using namespace std;

class BankAccount {
private:
    float balance;   

public:
     
    BankAccount() {
        balance = 0.0;
    }

   
    void deposit(float amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Deposit amount must be positive." << endl;
        }
    }

    
    void withdraw(float amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            cout << "Withdrawal amount must be positive." << endl;
        }
    }

     
    float getBalance() {
        return balance;
    }
};

int main() {
    BankAccount account;  

 
    cout << "Initial Balance: " << account.getBalance() << endl;

 
    account.deposit(1000);

 
    account.withdraw(500);

     
    account.withdraw(600);

   
    cout << "Final Balance: " << account.getBalance() << endl;

    return 0;
}

