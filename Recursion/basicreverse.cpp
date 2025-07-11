#include<iostream>
using namespace std;

void func(int num){
    if(num==0) return; //base case
    cout<<num<<endl;
    num--;
    func(num);
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    func(num);
}