#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int>vec){
    sort(vec.begin(),vec.end(),greater<int>());
    return vec;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    vector<int>ans=reverse(vec);
    cout<<"The reverse vector is: ";
    for(int i:ans){
        cout<<i<<" ";
    }
}