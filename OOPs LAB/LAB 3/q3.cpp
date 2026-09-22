// Create a class Bank account with data members account no,account holder,
// balance and implement member function deposit, withdraw and balance.

#include <iostream>
#include <string>
using namespace std;
class Bank_account{
    private :
        string account_name;
        int account_no;
        int balance;
    public :
        void accept_bank_detail(){
            cout << "Enter Holder Name : ";
            getline(cin,account_name);
            cout << "Enter Account Number : ";
            cin >> account_no;
            cout << "Enter Your balance : ";
            cin >> balance;
        }
        void deposit(){
            int deposit_amount;
            cout << "Enter Deposite amount = ";
            cin >> deposit_amount;
            balance += deposit_amount;          
        }
        void withdraw(){
            int withdraw_amount;
            cout << "Enter Withdraw amount = ";
            cin >> withdraw_amount;
            if(balance-withdraw_amount<0){
                cout << "Insufficent balance" << endl;
            }
            else{
                balance -= withdraw_amount;
            }         
        }
        void display_balance(){
            cout << "Balance : " << balance;
        }
};
int main(){
    Bank_account b1;
    b1.accept_bank_detail();
    b1.deposit();
    b1.withdraw();
    b1.display_balance();
    return 0;
}