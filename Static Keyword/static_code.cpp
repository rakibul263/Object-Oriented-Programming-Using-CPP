/***************************************
Author: Md Rakibul Hasan
date: 2024-07-23 22:19:01
****************************************/

#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    int x;
    void incX()
    {
        x = x + 1;
    }
};

void func()
{
    static int x = 0;
    cout << "X : " << x << endl;
    x++;
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    func();
    func();
    func();

    cout << endl
         << endl;

    A obj;
    obj.x = 0;
    cout << obj.x << endl;
    obj.incX();
    cout << obj.x << endl;

    return 0;
}