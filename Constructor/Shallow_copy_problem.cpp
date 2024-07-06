/***************************************
Author: Md Rakibul Hasan
date: 2024-07-06 10:52:57
****************************************/

#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    double *cgpaPtr;
    student(string name, double cgpa)
    {
        this->name = name;
        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }
    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << *cgpaPtr << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    student s1("rahul kumar", 3.84);
    student s2(s1);

    s1.getInfo();
    *(s2.cgpaPtr) = 9.2;
    s2.getInfo();

    return 0;
}