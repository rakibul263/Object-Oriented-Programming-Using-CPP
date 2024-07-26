/***************************************
Author: Md Rakibul Hasan
date: 2024-07-21 18:06:35
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Teacher
{
private:
    double salary;

public:
    // properties || attributes
    string name;
    string dept;
    string sub;

    // method || member function
    void changeDept(string newDept)
    {
        dept = newDept;
    }

    void setSelary(double newSalary)
    {
        salary = newSalary;
    }
    double getSalary()
    {
        return salary;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Teacher t1;
    t1.name = "Zaidur Rahman";
    t1.dept = "Computer Science";
    t1.sub = "C++";
    // t1.salery = 25000;
    t1.setSelary(25000);

    cout << t1.name << endl;
    cout << t1.getSalary() << endl;

    return 0;
}