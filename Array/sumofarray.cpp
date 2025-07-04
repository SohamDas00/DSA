#include<iostream>
using namespace std;

int main(){
    int arr[100];
    int size,sum=0;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++){
        sum+=arr[i];
    }
    cout<<"The total sum is: "<<sum;

}