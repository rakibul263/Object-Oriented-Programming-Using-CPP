/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 16:51:03
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    // constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // destructor
    ~Student()
    {
        cout << "I delete everything." << endl;
        delete cgpaPtr; // memory leak
    }

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "CGPA : " << *cgpaPtr << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1("Priya", 9.09);

    s1.getInfo();

    // cout << s1.name << endl;

    return 0;
}