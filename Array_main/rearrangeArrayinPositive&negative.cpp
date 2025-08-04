#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int>vec){
    vector<int>ans(vec.size());
    int pos=0,neg=1;
    for(int i=0;i<vec.size();i++){
        if(vec[i]>0){
            ans[pos]=vec[i];
            pos+=2;
        }
        else{
            ans[neg]=vec[i];
            neg+=2;
        }
    }
    return ans;
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
    vector<int>ansMain=rearrange(vec);
    cout<<"The rearrange vector: ";
    for(auto i:ansMain){
        cout<<i<<" ";
    }
}