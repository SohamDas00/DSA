#include<bits/stdc++.h>
using namespace std;

set<int> getIntersection(vector<int>&vec1,vector<int>&vec2){
    int size1=vec1.size();
    int size2=vec2.size();
    vector<int>ans;
    set<int>s;
    for(int i=0;i<size1;i++){
        for(int j=0;j<size2;j++){
            if(vec1[i]==vec2[j]){
                ans.push_back(vec1[i]);
            }
        }
    }
    for(auto i:ans){
        s.insert(i);
    }
    return s;
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

    set<int>ans=getIntersection(vec1,vec2);

    cout<<"The Intersection of two vector is: ";
    for(auto i:ans){
        cout<<i<<" ";
    }
}