#include<iostream>
using namespace std;

void func(int target){
    if(target==0) return;
    cout<<target<<" ";
    func(target-=1);
}

int main(){
    int target;
    cout<<"Enter target: ";
    cin>>target;
    func(target);
}