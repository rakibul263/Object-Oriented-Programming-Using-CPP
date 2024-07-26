/***************************************
Author: Md Rakibul Hasan
date: 2024-07-23 01:39:15
****************************************/

#include <bits/stdc++.h>
using namespace std;

// compile time polymorphism || constructor overloading

class Student
{
public:
    string name;

    Student()
    {
        cout << "Non-parameterized constructor..." << endl;
    }
    Student(string name)
    {
        this->name = name;
        cout << "Parameterized constructor..." << endl;
    }
};

// This is the main Function
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1;
    cout << endl;
    Student s2("Aysha Siddika");

    return 0;
}