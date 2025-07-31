#include<iostream>
using namespace std;

int missingNumber(int arr[],int size){
    int totalSum=(size*(size+1))/2;
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    int missing=totalSum-sum;
    return missing;
}

int main(){
    int arr[100],size;
    cout<<"Enter size: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The missing number is: "<<missingNumber(arr,size);
}