#include<iostream>
using namespace std;

void unique(int arr[],int size){
    cout<<"The unique element array is: ";
    for(int i=0;i<size;i++){
        int mathcFound=false;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j] && i!=j){
                mathcFound=true;
                break;
            }
        }
        if(!mathcFound){
            cout<<arr[i]<<" ";
        }
    }
}
int main(){
    int size,arr[100];
    cout<<"Enter size: ";
    cin>>size;
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    unique(arr,size);
}