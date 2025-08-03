#include<bits/stdc++.h>
using namespace std;

int majority(vector<int>vec,int size){
    for(int i=0;i<size;i++){
        int count=0;
        for(int j=0;j<size;j++){
            if(vec[i]==vec[j]){
                count++;
            }
        }
        if(count>size/2){
            return vec[i];
            break;
        }
    }

    return -1;
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
    cout<<"The majority element is: "<<majority(vec,size);
}