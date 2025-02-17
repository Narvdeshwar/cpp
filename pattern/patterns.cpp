#include <bits/stdc++.h>
using namespace std;
void printSqaure()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            cout << " *";
        }
        cout << endl;
    }

    for (int i = 0; i < 6; i++)
    {
        for (int j = 6; j >= 0; j--)
        {
            cout << " *";
        }
        cout << endl;
    }
}
void printInvertedTriangle()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = i; j < 6; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 6; j > i; j--)
        {
            cout << " *";
        }
        cout << endl;
    }
}
void printTriangle()
{
    // this make height n-1
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

void printTriangle1()
{
    // this make height n
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
}

int main()
{
    for (int i = 0; i < 6; i++)
    {
        for (int j = i + 1; j < 6; j++)
        {
            cout << " *";
        }
        cout << endl;
    }
    return 0;
}