#include<iostream>
using namespace std;

void prime(int num){
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count>0){
        cout<<num<<" is not prime number";
    }
    else{
        cout<<num<<" is prime number";
    }
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    prime(num);
}