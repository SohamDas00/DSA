#include<bits/stdc++.h>
using namespace std;

bool palin(string &name,int size,int i){
    if(i>=size/2) return true;
    if(name[i]!=name[size-i-1]){
        return false;
    }
    palin(name,size,i+1);
}

int main(){
    string name;
    cout<<"Enter name: ";
    cin>>name;
    int size=name.size();
    cout<<palin(name,size,0);
}