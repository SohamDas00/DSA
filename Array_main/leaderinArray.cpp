#include<bits/stdc++.h>
using namespace std;

vector<int> checkLeader(vector<int> vec){
    vector<int>ans;
    for(int i=0;i<vec.size();i++){
        int temp=0;
        for(int j=i+1;j<vec.size();j++){
            if(vec[j]>vec[i]){
                temp=1;
                break;
            }
        }
        if(temp==0){
            ans.push_back(vec[i]);
        }
    }
    return ans;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"The vector are: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    vector<int>ansMain=checkLeader(vec);
    cout<<"The leader of vector are: ";
    for(auto i:ansMain){
        cout<<i<<" ";
    }
}