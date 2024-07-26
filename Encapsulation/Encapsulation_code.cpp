/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 11:18:31
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Account
{
private:
    double balance;
    string password; // data hiding

public:
    string accountId;
    string userName;

    void setBalance(double b)
    {
        balance = b;
    }

    double getBalance()
    {
        return balance;
    }

    void setPassword(string pass)
    {
        password = pass;
    }

    string getPassword()
    {
        return password;
    }

    void getinfo()
    {
        cout << "Account ID : " << accountId << endl;
        cout << "User Name  : " << userName << endl;
        cout << "Balance    : " << getBalance() << endl;
        cout << "Password   : " << getPassword() << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Account myObj;
    myObj.accountId = "1263";
    myObj.userName = "inert_argon";
    myObj.setBalance(1200);
    myObj.setPassword("pa23@");

    myObj.getinfo();

    return 0;
}