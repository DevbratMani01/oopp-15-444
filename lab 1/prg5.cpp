#include<bits/stdc++.h>
using namespace std;

class BankAccount{
    private:
    string accountHolder;
    long accountNumber;
    double balance;

    public:
    BankAccount(string Holder , long AccNo , double initialBalance = 0.0){
        accountHolder = Holder;
        accountNumber = AccNo;
        balance = (initialBalance >= 0) ? initialBalance : 0.0;
    }

    void deposit(double amount){
        if (amount <= 0) {
            cout << "Deposit amount must be positive."<<endl;
            return;
        }
        balance += amount;
        cout << "Deposited: "<< amount << "New Balance: " << balance << endl;
    }
    void withdraw(double amount){
        if (amount <= 0) {
            cout << "Withdrawal amount must be positive.\n";
            return;
        }
        else if (amount > balance) {
            cout << "Insufficient balance.\n";
            return;
        }
        else{
            balance -= amount;
            cout<<"Withdrawn: "<<amount<<" New Balance: " << balance <<endl;
        }
    }

    void getBalance(){
        cout<<balance<<endl;
    }

    void displayAccount() const {
        cout << "Account Holder: " << accountHolder <<endl;
        cout << "Account Number: " << accountNumber <<endl;
        cout << "Balance: " << balance <<endl;
    }
};
int main(){
    BankAccount acc ("Devbrat" , 1928478302  , 966033.74);

    acc.deposit(29001);
    acc.withdraw(7352);
    acc.displayAccount();
    



return 0;
}