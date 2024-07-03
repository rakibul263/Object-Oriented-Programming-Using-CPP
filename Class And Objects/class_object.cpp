/***************************************
Author: Md Rakibul Hasan
date: 2024-07-03 18:20:54
****************************************/

#include <bits/stdc++.h>
using namespace std;

class teacher
{
private:
    double selary;

public:
    // propertics || atributes
    string name;
    string dept;
    string subject;

    // methods || member function
    void changeDept(int newDpt)
    {
        dept = newDpt;
    }

    // setter
    void setSelary(int s)
    {
        selary = s;
    }
    // getter
    double getSelary()
    {
        return selary;
    }
};

class Account
{
private:
    double balance;
    string password; // sata hiding

public:
    string name;
    string user_name;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    teacher t1;

    t1.name = "Shuvo";
    t1.dept = "CSE";
    t1.subject = "Programming";
    // t1.selary = 25000;
    t1.setSelary(25000);

    cout << t1.name << endl;
    cout << t1.getSelary() << endl;

    return 0;
}