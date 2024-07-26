/***************************************
Author: Md Rakibul Hasan
date: 2024-07-23 01:47:43
****************************************/

#include <bits/stdc++.h>
using namespace std;

// compile time polymorphism || Function overloading

class Print
{
public:
    void show(int x)
    {
        cout << "int : " << x << endl;
    }

    void show(char ch)
    {
        cout << "char : " << ch << endl;
    }
};

// This is the main Function
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    Print pt;
    pt.show(12);
    pt.show('c');

    return 0;
}