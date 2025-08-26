#include<iostream>
using namespace std;

void func(int num,int target){
    if(num==target) return;
    cout<<num<<" ";
    num++;
    func(num,target);
}

int main(){
    int num=0,target;
    cout<<"Enter target: ";
    cin>>target;
    func(num,target);
}