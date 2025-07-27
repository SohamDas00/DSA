#include<iostream>
using namespace std;

int largest(int arr[],int size){
    int large=arr[0];
    for(int i=1;i<size;i++){
        if(arr[i]>large){
            large=arr[i];
        }
    }
    return large;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The largest value is: "<<largest(arr,size);
}