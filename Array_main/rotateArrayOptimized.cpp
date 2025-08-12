#include<bits/stdc++.h>
using namespace std;

void rotateArray(vector<int>& nums, int k) {
    int size=nums.size();
    k%=size;

    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}

int main(){
    int size,move;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter move: ";
    cin>>move;
    rotateArray(vec,move);
    cout<<"The rotate array is: ";
    for(auto i:vec){
        cout<<i<<" ";
    }
}