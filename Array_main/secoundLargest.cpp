#include<iostream>
using namespace std;

int secound(int arr[],int size){
    int largest=arr[0];
    int secoundLargest=-1;
    for(int i=1;i<size;i++){
        if(arr[i]>largest){
            secoundLargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secoundLargest){
            secoundLargest=arr[i];
        }
    }
    return secoundLargest;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The Secound largest value is: "<<secound(arr,size);
}