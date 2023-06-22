#include<iostream>
#include<string>
#include <cstdlib>
using namespace std;

class Account{
    protected:
    int accno;
    float balance = 0;
    double interest;
    string name;

    public:
    Account(){}
    Account(string name, int accno, float balance, double interest){
        this->name = name;
        this->accno = accno;
        this->balance = balance;
        this->interest = interest;
    }

    void dep(float money){
        balance = balance + money;
        cout << "Balance after deposit = " << balance << endl;
    }

    void withd(int amt){
            // cout<<interest<<endl;
            balance = balance - amt;
            balance = balance - amt*interest;
            cout << "Balance after withdrawal = " << balance << endl;
    }
    

    void display(){
        cout << "Account Details-->"<<endl;
        cout << "Account holder Name: " << name <<endl;
        cout << "Account number: " << accno <<endl;
        cout << "Account Balance: " << balance <<endl<<endl;
    }
};

class SavingAccount: public Account{
    double interest = 0.002;

    public:
    SavingAccount(){}
    SavingAccount(string n, int ac, float bal): Account(n, ac, bal, getInterest()){}

    float getInterest(){ return interest; }

    void withdraw(float amt){
        if(amt > balance){
            cout<< "Insufficient Balance" <<endl;
            return;
        }
        withd(amt);
        cout<< "Transaction successful" <<endl;
    }
    void deposit(float amt){
        dep(amt);
        cout<< "Successfully Deposited!" <<endl;
    }

};

class CurrentAccount: public Account{
    double interest = 0.001;

    public:
    CurrentAccount(){}
    CurrentAccount(string n, int ac, float bal): Account(n, ac, bal, getInterest()){}

    float getInterest(){ return interest; }

    void withdraw(float amt){
        if(amt > balance){
            cout<< "Insufficient Balance" <<endl;
            return;
        }
        withd(amt);
        cout<< "Transaction successful" <<endl;
    }
    void deposit(float amt){
        dep(amt);
        cout<< "Successfully Deposited!" <<endl;
    }
};

class CreditAccount: public Account{
    double interest = 0.2;

    public:
    CreditAccount(){}
    CreditAccount(string n, int ac, float bal): Account(n, ac, bal, getInterest()){}

    float getInterest(){ return interest; }

    void withdraw(float amt){
        withd(amt);
        cout<< "Transaction successful" <<endl;
    }
    void deposit(float amt){
        dep(amt);
        cout<< "Successfully Deposited!" <<endl;
    }
};

int main(){
    int choice=0, ac, acChoice;
    float amt;
    string name;
    SavingAccount s;
    CurrentAccount c;
    CreditAccount cr;
    while (true){
        cout << endl<<endl<<"Enter 1 for create a bank account."<<endl<< "Enter 2 for deposit in a bank account."<<endl << "Enter 3 for withdrwaw in a bank account."<<endl <<"Enter 4 for display details."<<endl<<endl; 
        cout<<"Choice: ";
        cin >> choice;
        switch (choice){
        case 1:
            ac = rand();
            cout << "Enter your Name: ";
            cin >> name;
            s = SavingAccount(name, ac, 0);
            c = CurrentAccount(name, ac, 0);
            cr = CreditAccount(name, ac, 0);
            cout<<"Saving account: " <<endl;
            s.display();
            cout<<"Current account: " <<endl;
            c.display();
            cout<<"Credit account: " <<endl;
            cr.display();
            break;
        
        case 2:
            cout << "Enter amount to Deposit = ";
            cin >> amt;
            cout << "Select Account (1 for Saving, 2 for Current, 3 for Credit): ";
            cin >> acChoice;

            switch (acChoice){
            case 1:
                s.deposit(amt);
                break;

            case 2:
                c.deposit(amt);
                break;

            case 3:
                cr.deposit(amt);
                break;

            default:
                break;
            }
            break;
            
        case 3:
            cout << "Enter amount to withdraw = ";
            cin >> amt;
            cout << "Select Account (1 for Saving, 2 for Current, 3 for Credit): ";
            cin >> acChoice;

            switch (acChoice){
            case 1:
                s.withdraw(amt);
                break;

            case 2:
                c.withdraw(amt);
                break;

            case 3:
                cr.withdraw(amt);
                break;

            default:
                break;
            }
            break;

        case 4:
            s.display();
            c.display();
            cr.display();
            break;
        
        default:
            cout<<"Enter correct Option!";
            break;
        }
    }
    return 0;
}


// 1. Create a new account --> Saving, Current, Credit?
// 2. Withdrawal --> Saving, Current, Credit?
// 3. Deposit --> Saving, Current, Credit?

