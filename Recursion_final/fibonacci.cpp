#include<bits/stdc++.h>
using namespace std;

void fibbo(int size,int num1 ,int num2){
    if(size==0) return;
    int sum=num1+num2;
    cout<<sum<<" ";
    size--;
    fibbo(size,num2,sum);
}

int main(){
    int size;
    int num1=0,num2=1;
    cout<<"Enter range: ";
    cin>>size;
    cout<<"The fibonacci series is: "<<num1<<" "<<num2<<" ";
    fibbo(size-2,num1,num2);
}