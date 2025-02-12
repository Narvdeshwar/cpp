#include <bits/stdc++.h>
using namespace std;

void PrintAnArray(vector<int> &arr) {
  for(auto item : arr) {
    cout << item << " ";
  }
  cout << endl;
}

void extremeElement(vector<int> &arr,int size){
    int startIndex=0,lastIndex=size-1;
    while(startIndex<=lastIndex){
        if(startIndex==lastIndex){
            cout<<arr[startIndex]<<endl;
            break;
        }
        else{
            cout<<arr[startIndex]<<" "<<arr[lastIndex]<<endl;
            startIndex++;
            lastIndex--;
        }
    }
}

int main() {
  vector<int> arr={2,3,4,5,1,0,10,8,10};
  int n=arr.size();
  extremeElement(arr,n);
  return 0;
}
