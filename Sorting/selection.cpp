#include<bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int>arr){
    for(int i=0;i<arr.size()-1;i++){
        int min=i;
        for(int j=i;j<arr.size();j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        swap(arr[i],arr[min]);
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