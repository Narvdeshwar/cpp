#include <bits/stdc++.h>
using namespace std;

void TakingInputFromUser(vector<int> &arr, int size) {
  for(int i = 0; i < size; i++) {
    cin >> arr[i];
  }
}

void PrintAnArray(vector<int> &arr) {
  for(auto item : arr) {
    cout << item << " ";
  }
  cout << endl;
}
vector<int> assignElements(vector<int>& groups, vector<int>& elements) {
        vector<int> result;
        unordered_map<int, int> minIndexMap;

        // Sort elements and store the first occurrence index
        vector<pair<int, int>> sortedElements;
        for (int j = 0; j < elements.size(); j++) {
            sortedElements.push_back({elements[j], j});
        }
        sort(sortedElements.begin(), sortedElements.end()); // O(M log M)

        // Store the smallest index for each unique element
        for (auto& p : sortedElements) {
            if (minIndexMap.find(p.first) == minIndexMap.end()) {
                minIndexMap[p.first] = p.second;
            }
        }

        // Process each group
        for (int i = 0; i < groups.size(); i++) {
            int minIndex = INT_MAX;

            // Check divisors only up to sqrt(groups[i]) to reduce complexity
            for (int d = 1; d * d <= groups[i]; d++) {
                if (groups[i] % d == 0) {
                    // Check if d is a valid element
                    if (minIndexMap.count(d)) {
                        minIndex = min(minIndex, minIndexMap[d]);
                    }
                    // Check if (groups[i] / d) is a valid element
                    int other = groups[i] / d;
                    if (minIndexMap.count(other)) {
                        minIndex = min(minIndex, minIndexMap[other]);
                    }
                }
            }

            result.push_back((minIndex == INT_MAX) ? -1 : minIndex);
        }

        return result;
    }
};

int main() {
    vector<int> groups={10,21,30,41};
    vector<int> elements={2,1};
    vector<int> ans=assignElements(groups,elements);
    PrintAnArray(ans);
  return 0;
}
