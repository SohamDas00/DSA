#include<bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int>vec){
    for(int i=1;i<vec.size();i++){
        for(int j=i;j>0;j--){
            if(vec[j-1]>vec[j]){
                swap(vec[j-1],vec[j]);
            }
            else{
                break;
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