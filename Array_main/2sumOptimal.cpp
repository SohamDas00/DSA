#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>vec,int size,int target){
    int start=0,end=size-1,sum=0;
    vector<int> ans;
    while(start<=end){
        sum=vec[start]+vec[end];
        if(sum==target){
            ans.push_back(start);
            ans.push_back(end);
            return ans;
        }
        else if(sum>target){
            end--;
        }
        else{
            start++;
        }
    }
    return {-1,-1};
}

int main(){
    int size,target;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    vector<int>ans2=twoSum(vec,size,target);
    if(ans2[0]==-1){
        cout<<"No pair found";
    }
    else{
        cout<<"The sum pair is: ";
        for(auto i:ans2){
            cout<<i<<" ";
        }
    }
}
//Sorted array