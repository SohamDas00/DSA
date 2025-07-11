#include<iostream>
using namespace std;

void func(int a,int n){
    if(a>n) return;
    func(a+1,n);
    cout<<a<<endl;
}

int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    func(1,n);
}