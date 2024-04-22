#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    string name;
    string number;
    double defaltBalance;

public:
    BankAccount(string name1, string accountNumber, double balance)
    {
        name = name1;
        number = accountNumber;
        defaltBalance = balance;
    }

    void accountInfo() 
    {
        cout << "Your name: " << name << endl;
        cout << "Account number: " << number << endl;
        cout << "Your balance is: " << defaltBalance << endl;
    }

    void deposit(double amount) 
    {
        defaltBalance += amount;
        cout << "\nYour deposit is: " << amount << endl;
        cout << "Your balance now is: " << defaltBalance << endl;
    }

    void withdraw(double amount) 
    {
        if (defaltBalance >= amount)
        {
            defaltBalance -= amount;
            cout << "Your withdraw is: " << amount << endl;
            cout << "Your balance now is: " << defaltBalance << endl;
        }
    }
};

int main() 
{
    BankAccount account("Viktoria Kupenova", "25374893648", 100);

    account.accountInfo();

    account.deposit(500);

    account.withdraw(100);
}
