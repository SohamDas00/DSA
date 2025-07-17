#include<bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int>arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    return arr;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>arr(size);
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    vector <int> sortedArray=sorting(arr);

    cout<<"The sorted array is: ";
    for(int i=0;i<sortedArray.size();i++){
        cout<<sortedArray[i]<<" ";
    }
}