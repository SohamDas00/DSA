#include<bits/stdc++.h>
using namespace std;

int rangeSum(vector<int>&nums){
    int sum=0;
    for(int i=0;i<nums.size();i++){
        int currentMax=nums[i];
        int currentMin=nums[i];
        for(int j=i;j<nums.size();j++){
            currentMax=max(currentMax,nums[j]);
            currentMin=min(currentMin,nums[j]);
            sum+=(currentMax-currentMin);
        }
    }
    return sum;
}

int main(){
    int size,sum;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"The vector is: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Count all Subarray with given sum: "<<rangeSum(vec);
}