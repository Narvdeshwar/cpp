#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int sumOfOdd(int n)
{
    int sum = 0;
    int count = 0;
    int i = 1;
    while (count < n)
    {
        if (i % 2 != 0)
        {
            sum += i;
            count++;
            
        }
        i++;
        cout<<"Value of i"<<i<<endl;
    }
    cout << "Odd sum" << sum << endl;
    return sum;
}
int sumOfEven(int n)
{
    int sum = 0;
    int count = 0;
    int i = 2;
    while (count < n)
    {
        if (i % 2 == 0)
        {
            sum += i;
            count++;
            
        }
        i++;
    }
    cout << "even sum" << sum << endl;
    return sum;
}
int gcdOfOddEvenSums(int n)
{
    int ans = __gcd(sumOfEven(n), sumOfOdd(n));
    return ans;
}
int main()
{
    cout << gcdOfOddEvenSums(5);
}