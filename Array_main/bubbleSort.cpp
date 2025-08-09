#include<bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int>vec){
    for(int i=0;i<vec.size()-1;i++){
        for(int j=0;j<vec.size()-i-1;j++){
            if(vec[j]>vec[j+1]){
                swap(vec[j],vec[j+1]);
            }
        }
    }
    return vec;
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
    for(auto i:sortedArray){
        cout<<i<<" ";
    }
}