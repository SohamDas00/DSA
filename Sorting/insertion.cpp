#include<bits/stdc++.h>
using namespace std;

vector<int>sorting(vector<int>arr){
    int n=arr.size();
    for(int i=1;i<n;i++){
        int j=i;
        while(j>0 && arr[j-1]>arr[j]){
            int temp=arr[j-1];
            arr[j-1]=arr[j];
            arr[j]=temp;
            j--;
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
    
    vector<int>result=sorting(arr);

    cout<<"The sorted array is: ";
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
}