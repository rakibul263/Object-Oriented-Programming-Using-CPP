/***************************************
Author: Md Rakibul Hasan
date: 2024-07-05 12:45:35
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;
    string subject;
    double salary;

    /* Teacher() // non parameterize
    {
        cout << "dept = Computer Science Engineering";
    } */

    // parameterize constructor
    /* Teacher(string n, string d, string s, double sal)
    {
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    } */

    Teacher(string name, string dept, string subject, double salary)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
        this->salary = salary;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1("Shuvo", "CSE", "C++", 25000);
    // t1.name = "Shuvo";
    // // t1.dept = "EEE";
    // t1.subject = "Programming and Problem Solving";
    // t1.salary = 25000;

    cout << t1.name << endl;
    cout << t1.dept << endl;

    return 0;
}