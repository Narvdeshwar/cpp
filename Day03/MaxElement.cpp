#include<bits/stdc++.h>
using namespace std;
int maxElement(vector<int>arr,int size){
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
int main(){
    vector<int> arr={2,3,1,8,0,45,23};
    int n=arr.size();
    cout<<"Max element is = "<< maxElement(arr,n);
    return 0;
}