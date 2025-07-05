#include<iostream>
using namespace std;

void print(int arr[],int size){
    cout<<"The Reverse array is: ";
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

void rev(int arr[],int size){
    int start=0;
    int end=size-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    print(arr,size);
}

int main(){
    int size,arr[100];
    cout<<"Enter size: ";
    cin>>size;
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    rev(arr,size);
}