#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size,target,flag=0,index;
    cout<<"Enter target: ";
    cin>>target;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        if(target==arr[i]){
            flag=1;
            index=i;
        }
    }
    if(flag==1){
        cout<<target<<" found at index "<<index;
    }
    else{
        cout<<target<<" not found";
    }
}