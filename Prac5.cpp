#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;
    double interestRate;

public:
    // Constructor to initialize the balance and interest rate
    BankAccount(double initialBalance, double initialInterestRate) {
        balance = initialBalance;
        interestRate = initialInterestRate;
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << " successfully." << endl;
        } else {
            cout << "Invalid deposit amount. Please enter a positive value." << endl;
        }
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << " successfully." << endl;
        } else {
            cout << "Invalid withdrawal amount. Please check your balance and enter a valid amount." << endl;
        }
    }

    // Function to calculate and add interest to the account
    void addInterest() {
        balance += balance * interestRate / 100.0;
        cout << "Interest added to the account." << endl;
    }

    // Function to display the account balance
    void displayBalance() {
        cout << "Current balance: $" << balance << endl;
    }
};

int main() {
    double initialBalance, initialInterestRate;
    
    // Input initial balance and interest rate from the user
    cout << "Enter initial balance: $";
    cin >> initialBalance;

    cout << "Enter interest rate (%): ";
    cin >> initialInterestRate;

    // Create a BankAccount object with the provided values
    BankAccount account(initialBalance, initialInterestRate);

    int choice;
    double amount;

    do {
        cout << "\nMenu:\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Add Interest\n";
        cout << "4. Display Balance\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the deposit amount: $";
                cin >> amount;
                account.deposit(amount);
                break;
            case 2:
                cout << "Enter the withdrawal amount: $";
                cin >> amount;
                account.withdraw(amount);
                break;
            case 3:
                account.addInterest();
                break;
            case 4:
                account.displayBalance();
                break;
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 5);

    return 0;
}
