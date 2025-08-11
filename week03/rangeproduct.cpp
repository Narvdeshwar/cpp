#include <bits/stdc++.h>
using namespace std;

vector<int> productQueries(int n, vector<vector<int>> &queries)
{
    // Implementation not shown yet
    return {};
}

int main()
{
    vector<vector<int>> queries = {{0, 1}, {2, 2}, {0, 3}};
    int row = queries.size();
    int minValue = INT_MAX, maxValue = INT_MIN;

    for (int i = 0; i < row; i++)
    {
        int column = queries[0].size();
        for (int j = 0; j < column; j++)
        {
            minValue = min(queries[i][j], minValue);
            maxValue = max(queries[i][j], maxValue);
        }
    }

    vector<int> dp(maxValue + 1); // Fix: resize the vector properly

    for (int i = minValue; i <= maxValue; i++)
    {
        dp[i] = 1 << i;
    }

    for (auto &ele : dp)
    {
        cout << ele << endl;
    }

    cout << "Max Value = " << maxValue << " Min Value = " << minValue << endl;
}
