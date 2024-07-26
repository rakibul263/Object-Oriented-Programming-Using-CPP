/***************************************
Author: Md Rakibul Hasan
date: 2024-07-22 22:06:54
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Person
{
public:
    string name;
    int age;
};

class Student : public Person
{
public:
    int roll;
};

class Teacher : public Person
{
public:
    string sub;
    double salary;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}