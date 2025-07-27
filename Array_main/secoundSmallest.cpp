#include<iostream>
using namespace std;

int secound(int arr[],int size){
    int smallest=arr[0];
    int secoundSmallest=-1;
    for(int i=1;i<size;i++){
        if(arr[i]<smallest){
            secoundSmallest=smallest;
            smallest=arr[i];              
        }
        else if(arr[i]>smallest && arr[i]<secoundSmallest){
            secoundSmallest=arr[i];
        }
    }
    return secoundSmallest;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The Secound smallest value is: "<<secound(arr,size);
}