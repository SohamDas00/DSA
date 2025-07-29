#include<bits/stdc++.h>
using namespace std;

void moveZero(vector<int>&vec){
    int pos=0;
    for(int i=0;i<vec.size();i++){
        if(vec[i]!=0){
            swap(vec[i],vec[pos]);
            pos++;
        }
    }
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    moveZero(vec);
    cout<<"The modified array is: ";
    for(auto i:vec){
        cout<<i<<" ";
    }
}