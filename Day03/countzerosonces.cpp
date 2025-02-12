#include<bits/stdc++.h>
using namespace std;
void countZerosOnces(vector<int> arr,int size){
    int countZeros=0,countOnces=0;
    for(int i=0;i<size;i++){
        int currentElement=arr[i];
        if(arr[i]==0){
            countZeros++;
        }
        if(arr[i]==1){
            countOnces++;
        }
    }
    cout<<"Total count of Zeros: "<<countZeros<<endl;
    cout<<"Total count of Onces: "<<countOnces<<endl;
}
int main(){
    vector<int> arr={0,1,0,1,1,1,0,0,1};
    int n=arr.size();
    countZerosOnces(arr,n);
    return 0;
}