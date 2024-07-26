/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 15:21:07
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    double *cgpaPtr;

    // constractor
    Student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    // deep copy
    Student(Student &oriObj)
    {
        this->name = oriObj.name;
        cgpaPtr = new double;
        *cgpaPtr = *oriObj.cgpaPtr;
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

    Student s1("Rahul kumar", 8.9);
    Student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 9.65;
    cout << endl;
    s1.getInfo();

    return 0;
}