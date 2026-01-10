#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;  

public:
    
    void setBalance(double b) 
	{
        balance = b;
    }

    // Function to deposit amount
    void deposit(double amount) 
	{
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    // Function to withdraw amount
    void withdraw(double amount) 
	{
        if (amount <= balance) 
		{
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } 
		else 
		{
            cout << "Insufficient balance!" << endl;
        }
    }

    // Function to show current balance
    void showBalance() 
	{
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount acc;   

    acc.setBalance(10000);   // Initial balance
    acc.showBalance();

    acc.deposit(500);       // Deposit some money
    acc.withdraw(200);      // Withdraw some money

    acc.showBalance();      // Final balance

}

