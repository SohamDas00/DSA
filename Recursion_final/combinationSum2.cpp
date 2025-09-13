#include<bits/stdc++.h>
using namespace std;

void combinationSum(int ind,vector<int>&candidates,int target,vector<vector<int>>&ans,vector<int>&operation){
    if(ind==candidates.size()){
        if(target==0){
            ans.push_back(operation);
        }
        return;
    }
    if(candidates[ind]<=target){
        operation.push_back(candidates[ind]);
        combinationSum(ind+1,candidates,target-candidates[ind],ans,operation);
        operation.pop_back();
    }
    combinationSum(ind+1,candidates,target,ans,operation);
}

vector<vector<int>> combination(vector<int>&candidates,int target){
    vector<vector<int>>ans;
    vector<int>operation;
    combinationSum(0,candidates,target,ans,operation);
    return ans;
}

int main(){
    int size,target;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>candidates(size);
    for(int i=0;i<size;i++){
        cin>>candidates[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    vector<vector<int>> ans=combination(candidates,target);
    cout<<"The combination are: "<<endl;
    for(auto &i:ans){
        for(auto &j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}