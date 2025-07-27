#include<iostream>
using namespace std;

bool sorted(int arr[],int size){
    for(int i=1;i<size;i++){
        if(arr[i]>=arr[i-1]){
        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int sort=sorted(arr, size);
    if(sort==1){
        cout<<"The array is sorted";
    }
    else{
        cout<<"The array is not sorted";
    }
}