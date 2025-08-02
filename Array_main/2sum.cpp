#include<bits/stdc++.h>
using namespace std;

void twoSum(vector<int>vec,int target){
    int temp=0;
    int size=vec.size();
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(vec[i]+vec[j] == target && i!=j){
                temp=1;
                break;
            }
        }
    }
    if(temp==1){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
}

int main(){
    int size,target;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter target: ";
    cin>>target;
    twoSum(vec,target);
}