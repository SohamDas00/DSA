#include<bits/stdc++.h>
using namespace std;

void divisor(int num){
    cout<<"The divisor is: ";
    for(int i=1;i<=num;i++){
        if(num%i==0){
            cout<<i<<" ";
        }
    }
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    divisor(num);
}