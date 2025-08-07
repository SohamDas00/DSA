#include<bits/stdc++.h>
using namespace std;

int maximum(vector<int>vec){
    int maximum=vec[0];
    for(int i=1;i<vec.size();i++){
        if(vec[i]>maximum){
            maximum=vec[i];
        }
    }
    return maximum;
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
    cout<<"The maximum element is :"<<maximum(vec);
}