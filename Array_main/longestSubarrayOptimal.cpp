#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>vec,int k){
    int left=0;
    int sum=0;
    int n=vec.size();
    int pos=0;
    for(int right=0;right<n;right++){
        sum+=vec[right];

        while(sum>k && left<=right){
            sum-=vec[left];
            left++;
        }

        if(sum==k){
            pos=max(pos,right-left+1);
        }
    }
    return pos;
}

int main(){
    int size,target;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter target: ";
    cin>>target;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"The longest subarray sum is: "<<longestSubarray(vec,target);
}