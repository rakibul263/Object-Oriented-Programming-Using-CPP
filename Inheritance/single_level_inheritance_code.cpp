/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 17:09:14
****************************************/
// when properties and member functions of base class are passed on the derived class

#include <bits/stdc++.h>
using namespace std;

// parent class
// constructor :: first call parent constructor && second call child constructor.
// destructor :: first call child constructor && second call parent constructor.

class Person
{
public:
    string name;
    int age;

    // default constructor
    Person()
    {
        cout << "Parent class call..." << endl;
    }

    ~Person()
    {
        cout << "Parent class is delete...\n";
    }
};

// child class
class Student : public Person
{
public:
    // name && age && rollnumber
    int rollnumber;

    Student(string name, int age, int rollnumber)
    {
        this->name = name;
        this->age = age;
        Student::rollnumber = rollnumber;
    }

    ~Student()
    {
        cout << "child class is delete...\n";
    }

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age  : " << age << endl;
        cout << "Roll : " << rollnumber << endl;
    }
};

// this is the main function
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Student s1("Shuvo", 21, 263);
    // s1.name = "Shuvo";
    // s1.age = 21;
    // s1.rollnumber = 263;

    s1.getInfo();

    return 0;
}