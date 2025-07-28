#include<bits/stdc++.h>
using namespace std;

vector<int> leftShift(vector<int>&vec){
    int size=vec.size();
    int vecFirst=vec[0];
    for(int i=1;i<size;i++){
        vec[i-1]=vec[i];
    }
    vec[size-1]=vecFirst;
    return vec;
}

int main(){
    int Size;
    cout<<"Enter Size: ";
    cin>>Size;
    vector<int>vec(Size);
    cout<<"The array is: ";
    for(int i=0;i<Size;i++){
        cin>>vec[i];
    }
    vector<int>vecRotate=leftShift(vec);
    cout<<"The left shift array is: ";
    for(auto i:vecRotate){
        cout<<i<<" ";
    }
}