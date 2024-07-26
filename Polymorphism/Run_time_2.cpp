/***************************************
Author: Md Rakibul Hasan
date: 2024-07-23 02:19:45
****************************************/

#include <bits/stdc++.h>
using namespace std;

// Run time polymorphism || virtual Function

class Parent
{
public:
    void getInfo()
    {
        cout << "Parent function called..." << endl;
    }

    virtual void Hello()
    {
        cout << "Hello!  from parent..." << endl;
    }
};

class Child : public Parent
{
public:
    void getInfo()
    {
        cout << "Child Function called..." << endl;
    }

    void Hello()
    {
        cout << "Hello! from child..." << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Child c1;
    c1.Hello();

    return 0;
}