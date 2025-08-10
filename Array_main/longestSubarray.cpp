#include<bits/stdc++.h>
using namespace std;

int longestSubarray(vector<int>vec,int k){
    int pos=0;
    for(int i=0;i<vec.size();i++){
        int sum=0;
        for(int j=i;j<vec.size();j++){
            sum+=vec[j];
            if(sum==k){
                pos=max(pos,j-i+1);
            }    
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