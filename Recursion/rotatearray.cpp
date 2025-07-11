#include<bits/stdc++.h>
using namespace std;

void func(int arr[],int size,int i){
    if(i>=size/2) return;
    swap(arr[i],arr[size-i-1]);
    func(arr,size,i+1);
}

int main(){
    int arr[100],size;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    func(arr,size,0);
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}