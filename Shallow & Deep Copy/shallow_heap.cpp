/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 15:05:25
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    // parameterized constructor
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // copy constructor
    Student(Student &oriObj)
    {
        this->name = oriObj.name;
        this->cgpaPtr = oriObj.cgpaPtr;
    }

    // get information || method
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

    Student s1("Shuvo", 4.98);
    Student s2(s1); // Hasan

    s1.getInfo();
    *(s2.cgpaPtr) = 8.9;
    cout << endl;
    s1.getInfo();

    return 0;
}