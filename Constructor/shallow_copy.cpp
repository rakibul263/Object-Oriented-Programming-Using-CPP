/***************************************
Author: Md Rakibul Hasan
date: 2024-07-05 15:00:04
****************************************/

#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    string name;
    double cgpa;
    student(string name, double cgpa)
    {
        this->name = name;
        this->cgpa = cgpa;
    }
    // custom constructor
    student(student &obj)
    {
        this->name = obj.name;
        this->cgpa = obj.cgpa;
    }

    void getInfo()
    {
        cout << "Name: " << name << endl;
        cout << "CGPA: " << cgpa << endl;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    student s1("Shuvo", 3.30);
    student s2(s1);
    s2.getInfo();
    return 0;
}