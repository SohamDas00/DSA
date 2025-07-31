#include<bits/stdc++.h>
using namespace std;

vector<int> getIntersection(vector<int>vec1,vector<int>vec2){
    int n1=vec1.size();
    int n2=vec2.size();
    vector<int>ans;
    int i=0,j=0;
    while(i<n1 && j<n2){
        if(vec1[i]==vec2[j]){
            ans.push_back(vec1[i]);
            i++;
            j++;
        }
        else if(vec1[i]>vec2[j]){
            j++;
        }
        else{
            i++;
        }
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

    vector<int>ans=getIntersection(vec1,vec2);
    cout<<"The intersection of two array is: ";
    for(int i:ans){
        cout<<i<<" ";
    }
}