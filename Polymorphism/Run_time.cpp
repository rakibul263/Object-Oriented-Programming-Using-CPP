/***************************************
Author: Md Rakibul Hasan
date: 2024-07-23 02:07:31
****************************************/

#include <bits/stdc++.h>
using namespace std;

// Run time polymorphism || function overriding

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent Class..." << endl;
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child Class..." << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Child c1;
    c1.getInfo();

    return 0;
}