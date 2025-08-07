#include<bits/stdc++.h>
using namespace std;

int secoundMaximum(vector<int>vec){
    int maximum=vec[0],secoundMaximum=vec[0];
    for(int i=1;i<vec.size();i++){
        if(vec[i]>maximum){
            secoundMaximum=maximum;
            maximum=vec[i];
        }
        else if(vec[i]>secoundMaximum && vec[i]<=maximum){
            secoundMaximum=vec[i];
        }
    }
    return secoundMaximum;
}

int secoundMinimum(vector<int>vec){
    int minimum=vec[0],secoundMinimum=vec[0];
    for(int i=1;i<vec.size();i++){
        if(vec[i]<minimum){
            secoundMinimum=minimum;
            minimum=vec[i];
        }
        else if(vec[i]<secoundMinimum && vec[i]>=minimum){
            secoundMinimum=vec[i];
        }
    }
    return secoundMinimum;
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
    cout<<"The secound maximum digit is: "<<secoundMaximum(vec)<<endl;
    cout<<"The secound minimum digit is: "<<secoundMinimum(vec);
}