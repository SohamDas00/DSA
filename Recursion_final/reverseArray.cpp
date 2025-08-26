#include<bits/stdc++.h>
using namespace std;

void revArray(vector<int>&vec,int low,int high){
    if(low>=high) return;
    swap(vec[low],vec[high]);
    revArray(vec,low+1,high-1);
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"The original array is: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    int low=0,high=size-1;
    revArray(vec,low,high);
    cout<<"The swap array is: ";
    for(auto j:vec){
        cout<<j<<" ";
    }
}