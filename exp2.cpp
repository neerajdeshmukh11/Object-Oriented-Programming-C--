#include <iostream>
#include <string>

class BankAccount {
private:
    std::string depositorName;
    int accountNumber;
    std::string accountType;
    double balance;

public:
    BankAccount(const std::string& name, int accNum, const std::string& accType, double initialBalance) {
        depositorName = name;
        accountNumber = accNum;
        accountType = accType;
        balance = initialBalance;
    }

    void deposit(double amount) {
        balance += amount;
        std::cout << "Deposit of $" << amount << " successful.\n";
    }

    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            std::cout << "Withdrawal of $" << amount << " successful.\n";
        } else {
            std::cout << "Insufficient funds. Withdrawal failed.\n";
        }
    }

    void display() {
        std::cout << "Depositor Name: " << depositorName << std::endl;
        std::cout << "Account Number: " << accountNumber << std::endl;
        std::cout << "Account Type: " << accountType << std::endl;
        std::cout << "Balance: $" << balance << std::endl;
    }
};

int main() {
    BankAccount account("John Doe", 123456789, "Savings", 1000.0);
    account.display();
    std::cout << std::endl;

    account.deposit(500.0);
    account.withdraw(200.0);
    std::cout << std::endl;

    account.display();

    return 0;
}