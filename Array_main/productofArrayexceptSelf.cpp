#include<bits/stdc++.h>
using namespace std;

vector<int> productExceptSelf(vector<int>& nums) {
    vector<int>ans;
    for(int i=0;i<nums.size();i++){
        int product=1;
        for(int j=0;j<nums.size();j++){
            if(i!=j){
                product*=nums[j];
            }
        }
        ans.push_back(product);
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>nums(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>nums[i];
    }
    vector<int>ansMain=productExceptSelf(nums);
    for(auto i:ansMain){
        cout<<i<<" ";
    }
}
//O(n^2)