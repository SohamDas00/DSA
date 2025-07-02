#include<iostream>
using namespace std;

int main(){
    int count=0;
    int num;
    cout<<"Enter value: ";
    cin>>num;
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