#include<bits/stdc++.h>
using namespace std;

void func(string name,int count){
    if(count==5) return;
    cout<<name<<" ";
    count++;
    func(name,count);
}

int main(){
    string name;
    cout<<"Enter name: ";
    cin>>name;
    int count=0;
    func(name,count);
}