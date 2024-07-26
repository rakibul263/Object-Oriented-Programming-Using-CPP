/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 19:28:01
****************************************/

#include <bits/stdc++.h>
using namespace std;

// parent class
class Person
{
public:
    string name;
    int age;
};

// parent class
class Student : public Person
{
public:
    int roll;
};

// child class
class gradStudent : public Student
{
public:
    string reseachArea;
    gradStudent(string name, int age, int roll, string reseachArea)
    {
        this->name = name;
        this->age = age;
        this->roll = roll;
        gradStudent::reseachArea = reseachArea;
    }

    void getInfo()
    {
        cout << "Name   : " << name << endl;
        cout << "Age    : " << age << endl;
        cout << "Roll   : " << roll << endl;
        cout << "Reseach: " << reseachArea << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    gradStudent s1("Rohim", 18, 162, "Bangladesh Studies");

    s1.getInfo();

    return 0;
}