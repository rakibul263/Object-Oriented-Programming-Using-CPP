/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 13:31:06
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    double cgpa;

    Student(string name, double cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }

    Student(Student &oriObj)
    {
        this->name = oriObj.name;
        this->cgpa = oriObj.cgpa;
    }

    void getInfo()
    {
        cout << name << endl;
        cout << cgpa << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1("Raha", 4.92);
    // s1.getInfo();

    Student s2(s1);
    // s2.cgpa = 3.21;

    s2.getInfo();

    return 0;
}