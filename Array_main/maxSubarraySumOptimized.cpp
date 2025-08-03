#include<bits/stdc++.h>
using namespace std;

maxSubarray(vector<int>vec){
    int maxSum=0;
    int currSum=vec[0];
    for(int i=1;i<vec.size();i++){
        currSum=max(vec[i],currSum+vec[i]);
        maxSum=max(currSum,maxSum);
    }
    return maxSum; 
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"The vector is: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"The max sum is: "<<maxSubarray(vec);
}