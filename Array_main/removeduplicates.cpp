#include<iostream>
using namespace std;

int removeduplicate(int arr[],int size){
    int i=0;
    for(int j=1;j<size;j++){
        if(arr[i]!=arr[j]){
            arr[i+1]=arr[j];
            i++; 
        }
    }
    return i+1;
}

int main(){
    int arr[100],size;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter value: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int newsize=removeduplicate(arr,size);
    cout<<"The unique element is: ";
    for(int i=0;i<newsize;i++){
        cout<<arr[i]<<",";
    }
}