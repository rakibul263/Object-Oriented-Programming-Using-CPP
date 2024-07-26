/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 11:45:46
****************************************/

// three types of constructor
// non - parameterized || parameterized || copy constructor;

#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    string name;
    string dept;
    string sub;

    // constructor || non - parameterized
    Teacher()
    {
        // cout << "Hi! I am constructor\n";
        dept = "computer science";
    }

    // parameterized constructor
    Teacher(string name, string dept, string sub)
    {
        this->name = name;
        this->dept = dept;
        this->sub = sub;
    }

    // copy constructor
    Teacher(Teacher &oriObj) // pass by reference
    {
        cout << "I am a copy constructor\n";
        this->name = oriObj.name;
        this->dept = oriObj.dept;
        this->sub = oriObj.sub;
    }

    void setSalary(double s)
    {
        salary = s;
    }

    double getSalary()
    {
        return salary;
    }

    void getinfo()
    {
        cout << "Name: " << name << endl;
        cout << "Dept: " << dept << endl;
        cout << "Sub : " << sub << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1("Shuvo", "CSE", "c++"); // constructor call

    // t1.name = "Noori";
    // t1.sub = "c++";

    // cout << t1.dept << endl;
    // t1.getinfo();

    // copy constructor
    Teacher t2(t1);
    t2.getinfo();

    return 0;
}