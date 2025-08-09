#include<bits/stdc++.h>
using namespace std;

vector<int>sorting(vector<int>vec){
    for(int i=0;i<vec.size()-1;i++){
        int index=i;
        for(int j=i+1;j<vec.size();j++){
            if(vec[j]<vec[index]){
                index=j;
            }
        }
        swap(vec[i],vec[index]);
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