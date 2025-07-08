#include<iostream>
using namespace std;

int lowerbound(int arr[],int target, int size){
    int start=0,end=size-1,ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
    }
    return ans;
}
int upperbound(int arr[],int target, int size){
    int start=0,end=size-1,ans=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
    }
    return ans;
}


int main(){
    int arr[100],size,target;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    int lower=lowerbound(arr,target,size);
    int upper=upperbound(arr,target,size);
    int ans=(upper-lower)+1;
    cout<<"The total occurance is: "<<ans;
}