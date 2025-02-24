#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    int n = arr.size();
    int totalSum = accumulate(arr.begin(), arr.end(), 0);
    int currentIndex = 0;
    while (true)
    {
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            temp.push_back(arr[currentIndex]);
        }
        int currentSum = accumulate(temp.begin(), temp.end(), 0);
        cout << "CurrentSum:" << currentSum << "and Total Sum:" << totalSum << endl;
        if (currentSum <= totalSum)
        {
            currentIndex++;
            temp.clear();
        }
        else
        {
            break;
        }
    }
    cout << arr[currentIndex] << " " << currentIndex << endl;
}