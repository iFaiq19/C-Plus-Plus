#include <iostream>
using namespace std;

class AccountManage
{
    protected:
        char account_type[3];
        double balance;
    public:
        void input()
        {   cout << "Select account type (c/s): ";
            cin >> account_type;
            cout << "Enter Current Balance: ";
            cin >> balance;
        }

        void display()
        {
            cout << "Account Type: " << account_type;
            cout << "Balance: " << balance;
            cout << "Interest Rate:" << (balance/100)*11 <<"%";
        }
};

class transactions : virtual public AccountManage
{
    private:
        double amount, balance;
    public:
        void deposit()
        {
            cout << "--------------------------------------------" << endl;
            cout << "Current Balance: " << balance << endl;
            cout << "Enter amount to deposit: "; cin >> amount;
            balance += amount;
            cout << "Deposit Successful!" << endl;
            cout << "Your account balance after the deposit is: RS. " << balance << endl;
            cout << "--------------------------------------------" << endl;
        }

        void widtdraw()
        {
            cout << "--------------------------------------------" << endl;
            cout << "Current Balance: " << balance << endl;
            cout << "Enter amount to withdraw: "; cin >> amount;
            if (amount>balance)
            {
                cout << "You donot have enough money in your account. Try again." << endl;
                cout << "Enter amount to withdraw: "; cin >> amount;
            }
            else
            {
                balance -= amount;
                cout << "Widtdrawal Successful!" << endl;
                cout << "Your account balance after the withdrawal is: RS. " << balance << endl;
            cout << "--------------------------------------------" << endl;
            }
        }
        void display()
        {
            AccountManage::display();
            cout << "Your Balance After Transactions: " << balance;
            cout << "New Interest Rate: " << (balance/100)*11 << "%";
        }
};

class complaint
{
    private:
        char complaint[2];
    public:
    void type()
    {
        cout << "Choose an option: "
             << "1. Transaction, 2. Services";
        cin >> complaint;
        cout << "We are really sorry about the problem you're having, an email has been sent to you on the address you provided." << endl;
    }
};

class functions
{
    private:
        AccountManage obj1;
        transactions obj2;
    public:
        functions()
        {
            obj1.input();
            obj1.display();
            obj2.deposit();
            obj2.widtdraw();
            obj2.display();
        }
};


