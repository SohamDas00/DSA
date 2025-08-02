#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>vec,int target){
    vector<int>res;
    int size=vec.size();
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(vec[i]+vec[j] == target && i!=j){
                res.push_back(i);
                res.push_back(j);
                return res;
            }
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
    vector<int>ans=twoSum(vec,target);
    if(ans[0]==-1){
        cout<<"No pair found";
    }
    else{
        cout<<"The index of 2sum is: ";
        for(auto i:ans){
            cout<<i<<" ";
        }
    }
}