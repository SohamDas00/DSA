#include<bits/stdc++.h>
using namespace std;

int search(vector<int>& arr, int n, int k)
{
    int low=0,high=n-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==k) return mid;
        if(arr[low]<=arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int size,num;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter number: ";
    cin>>num;
    cout<<"The index of the number is: "<<search(vec,size,num);
}