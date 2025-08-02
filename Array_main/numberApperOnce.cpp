#include<iostream>
using namespace std;

int apperOne(int arr[],int size){
    for(int i=0;i<size;i++){
        int found=0;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                found=1;
            }
        }
        if(found==0){
            return arr[i];
        }
    }
}

int main(){
    int arr[100],size;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter array: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The Number apper Once: "<<apperOne(arr,size);
}