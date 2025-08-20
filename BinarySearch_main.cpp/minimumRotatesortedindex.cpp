#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr)
{
	int low=0,high=arr.size()-1;
    int minimum=INT_MAX;
    int index=-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[low]<=arr[mid]){
            if(arr[low]<minimum){
                minimum=arr[low];
                index=low;
            }
            low=mid+1;
        }
        else{
            if(arr[mid]<arr[high]){
                minimum=arr[mid];
                index=mid;
            }
            high=mid-1;
        }
    }
    return index;
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
    cout<<"The rotate number is: "<<findMin(vec);
}