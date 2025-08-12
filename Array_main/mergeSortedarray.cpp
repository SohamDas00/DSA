#include<bits/stdc++.h>
using namespace std;

void mergeSortedarray(vector<int>& nums1,vector<int>& nums2,int m, int n){
    nums1.erase(nums1.begin()+m,nums1.end());
    nums1.insert(nums1.end(),nums2.begin(),nums2.end());
    sort(nums1.begin(),nums1.end());
    cout<<"The merge sorted vector is: ";
    for(int i:nums1){
        cout<<i<<" ";
    }
}

int main(){
    int size1,size2;
    cout<<"Enter size1: ";
    cin>>size1;
    cout<<"Enter size2: ";
    cin>>size2;
    vector<int>vec1(size1+size2);
    vector<int>vec2(size2);
    cout<<"Enter vector 1: ";
    for(int i=0;i<size1;i++){
        cin>>vec1[i];
    }
    cout<<"Enter vector 2: ";
    for(int j=0;j<size2;j++){
        cin>>vec2[j];
    }
    cout<<"The vector 1 is: ";
    for(int i=0;i<vec1.size();i++){
        cout<<vec1[i]<<" ";
    }
    cout<<endl;
    cout<<"The vector 2 is: ";
    for(int i=0;i<size2;i++){
        cout<<vec2[i]<<" ";
    }
    cout<<endl;
    mergeSortedarray(vec1,vec2,size1,size2);
}