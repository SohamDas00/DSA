#include<bits/stdc++.h>
using namespace std;

vector<int> getUnion(vector<int>&vec1,vector<int>&vec2){
    int s1=vec1.size();
    int s2=vec2.size();
    set<int>s;
    for(int i=0;i<s1;i++){
        s.insert(vec1[i]);
    }
    for(int i=0;i<s2;i++){
        s.insert(vec2[i]);
    }
    vector<int>ans;
    for(auto i :s){
        ans.push_back(i);
    }

    return ans;
}

int main(){
    int size1,size2;
    cout<<"Enter size1: ";
    cin>>size1;
    cout<<"Enter size2: ";
    cin>>size2;
    vector<int>vec1(size1);
    vector<int>vec2(size2);

    cout<<"Enter 1st vector: ";
    for(int i=0;i<size1;i++){
        cin>>vec1[i];
    }

    cout<<"Enter 2nd vector: ";
    for(int i=0;i<size2;i++){
        cin>>vec2[i];
    }

    vector<int>ans=getUnion(vec1,vec2);

    cout<<"The union of two vector is: ";
    for(auto i:ans){
        cout<<i<<" ";
    }
}