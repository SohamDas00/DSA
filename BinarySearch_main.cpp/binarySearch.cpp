#include<bits/stdc++.h>
using namespace std;

int binary(vector<int>&vec,int target){
    int size=vec.size();
    int start=0;
    int end=size-1;
    
    while(start<=end){
        int mid=start+(end-start)/2;

        if(vec[mid]==target){
            return mid;
            break;
        }

        else if(vec[mid]>target){
            end=mid-1;
        }
        else if(vec[mid]<target){
            start=mid+1;
        }
    }
    return -1;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int ans=binary(vec,target);
    if(ans==-1){
        cout<<"target not found";
    }
    else{
        cout<<"The index of that number is: "<<ans;
    }
}