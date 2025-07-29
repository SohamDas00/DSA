#include<bits/stdc++.h>
using namespace std;

int search(vector<int>&vec,int num){
    int temp=-1;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==num){
            temp=i;
            break;
        }
    }
    return temp;
}

int main(){
    int size,num;
    cout<<"Enter size: ";
    cin>>size;
    cout<<"Enter element: ";
    cin>>num;
    vector<int>vec(size);
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"The index is: "<<search(vec,num);
}