#include<iostream>
using namespace std;

int maximumOne(int arr[],int size){
    int count=0,maxOne=0;
    for(int i=0;i<size;i++){
        if(arr[i]==1){
            count++;
        }
        else if(arr[i]==0){
            maxOne=max(count,maxOne);
            count=0;
        }
    }
    maxOne=max(count,maxOne);
    return maxOne;
}

int main(){
    int arr[100],size;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter 1 and 0 array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The maximum Consecutive 1 is: "<<maximumOne(arr,size);
}