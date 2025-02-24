#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s = "3902";
    string temp = "";
    for (int i = 0; i < s.size() - 1; i++)
    {
        temp += itos((stoi(s[i]) + stoi(s[i + 1])) % 10);
    }
    return 0;
}