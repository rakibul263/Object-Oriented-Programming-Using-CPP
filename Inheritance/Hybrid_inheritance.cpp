/***************************************
Author: Md Rakibul Hasan
date: 2024-07-23 01:02:05
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
    Person(string name, int age)
    {
        Person::name = name;
        Person::age = age;
    }
};
class Student : public Person
{
public:
    int studentId;

    Student(string name, int age, int studentId) : Person(name, age)
    {
        this->name = name;
        this->age = age;
        Student::studentId = studentId;
    }
};
class grandStudent : public Student
{
public:
    string weakSub;
    string strongSub;
    grandStudent(string name, int age, int studentId, string weakSub, string strongSub) : Student(name, age, studentId)
    {
        this->name = name;
        this->age = age;
        this->studentId = studentId;
        this->weakSub = weakSub;
        this->strongSub = strongSub;
        // grandStudent::weakSub = weakSub;
        // grandStudent::strongSub = strongSub;
    }

    void getInfo()
    {
        cout << "Name : " << name << endl;
        cout << "Age : " << age << endl;
        cout << "StId : " << studentId << endl;
        cout << "WkSub: " << weakSub << endl;
        cout << "StSub: " << strongSub << endl;
    }
};
class Teacher : public Person
{
public:
    string sub;
    Teacher(string name, int age, string sub) : Person(name, age)
    {
        this->name = name;
        this->age = age;
        Teacher::sub = sub;
    }
};
// person && student && teacher
class TA : public Person, public Student, public Teacher
{
public:
    string dept;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    grandStudent gs1("Shuvo", 18, 012213, "Physics", "ICT");
    gs1.getInfo();

    return 0;
}