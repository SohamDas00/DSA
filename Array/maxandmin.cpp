#include<iostream>
#include<climits>
using namespace std;

int maximum(int arr[],int size) {
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
    }
    return maxi;
}
int minimum(int arr[],int size) {
    int mini=INT_MAX;
    for(int i=0;i<size;i++){
        mini=min(mini,arr[i]);
    }
    return mini;
}

int main(){
    int arr[100];
    int size;
    cout<<"Enter size: ";
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"The maximum number is: "<<maximum(arr,size)<<endl;
    cout<<"The minimum number is: "<<minimum(arr,size)<<endl;
}