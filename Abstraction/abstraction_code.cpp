/***************************************
Author: Md Rakibul Hasan
date: 2024-07-23 22:12:14
****************************************/

#include <bits/stdc++.h>
using namespace std;

class Shape
{
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape
{
public:
    void draw()
    {
        cout << "drawing circle..." << endl;
    }
};

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    return 0;
}