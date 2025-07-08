#include<iostream>
using namespace std;

binarysearch(int arr[],int size,int target){
    int start=0,end=size-1,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]==target){
            return mid;
            break;
        }
        else if(arr[mid]<target){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
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
    cout<<"The element is in position: "<<binarysearch(arr,size,target);
}