/***************************************
Author: Md Rakibul Hasan
date: 2024-07-05 14:23:22
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Teacher
{
public:
    string name;
    string dept;
    string subject;
    // parameterize constructor
    Teacher(string name, string dept, string subject)
    {
        this->name = name;
        this->dept = dept;
        this->subject = subject;
    }
    // copy constructor
    Teacher(Teacher &obj)
    {
        cout << "Custom copy constructor" << endl;
        this->name = obj.name;
        this->dept = obj.dept;
        this->subject = obj.subject;
    }

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Subject: " << subject << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1("Shuvo", "CSE", "C++");
    // Teacher t2(t1); // default copy constructor
    Teacher t2(t1);
    t2.getinfo();
    return 0;
}