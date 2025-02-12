#include<bits/stdc++.h>
using namespace std;
int minElement(vector<int>arr,int size){
    int min=INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int main(){
    vector<int> arr={2,3,1,8,0,45,23};
    int n=arr.size();
    cout<<"Max element is = "<< minElement(arr,n);
    return 0;
}