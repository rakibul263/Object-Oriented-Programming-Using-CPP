/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 21:45:06
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int roll;
};

class Teacher
{
public:
    string sub;
    double salary;
};
class TA : public Student, public Teacher
{
public:
    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Sub : " << sub << endl;
        cout << "Salary : " << salary << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    TA t1;
    t1.name = "Rahim";
    t1.roll = 1212;
    t1.sub = "ICT";
    t1.salary = 20000;

    t1.getInfo();

    return 0;
}