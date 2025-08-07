#include<bits/stdc++.h>
using namespace std;

int minimum(vector<int>vec){
    int minimum=vec[0];
    for(int i=1;i<vec.size();i++){
        if(vec[i]<minimum){
            minimum=vec[i];
        }
    }
    return minimum;
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
    cout<<"The minimum element is :"<<minimum(vec);
}