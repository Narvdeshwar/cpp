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

int main() {
  int size;
  cout << "Enter the size of array: ";
  cin >> size;

  vector<int> arr(size);
  TakingInputFromUser(arr, size);
  PrintAnArray(arr);

  return 0;
}
