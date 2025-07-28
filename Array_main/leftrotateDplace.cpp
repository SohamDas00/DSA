#include<bits/stdc++.h>
using namespace std;

vector<int>leftrotate(vector<int>&vec,int move){
    int size=vec.size();
    vector<int>temp;
    vector<int>ans;
    for(int i=0;i<move;i++){
        temp.push_back(vec[i]);
    }
    for(int i=move;i<size;i++){
        ans.push_back(vec[i]);
    }
    ans.insert(ans.end(),temp.begin(),temp.end());
    return ans;
}

int main(){
    int size,move;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter move: ";
    cin>>move;
    vector<int>vec(size);
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    vector<int>mainAns=leftrotate(vec,move);
    cout<<"The left shift array is: ";
    for(auto i:mainAns){
        cout<<i<<" ";
    }
}