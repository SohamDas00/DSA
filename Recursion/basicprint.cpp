#include<iostream>
using namespace std;

void func(int num1,int num2){
    if(num1==num2) return; //base case
    cout<<num1<<endl;
    num1++;
    func(num1,num2);
}

int main(){
    int num1=0,num2;
    cout<<"Enter value: ";
    cin>>num2;
    func(num1,num2);
}