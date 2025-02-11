#include <bits/stdc++.h>
using namespace std;

// linear search algorithm
bool linearsearch(vector<int> &arr,int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            return true;
        }
    }
    return false;
}
int main() {
    vector<int> arr={2,3,12,1,9};
    int target1=7;
    int target2=3;
    int length=arr.size();
    cout<<linearsearch(arr,length,target1)<<endl;
    cout<<linearsearch(arr,length,target2)<<endl;
  return 0;
}
