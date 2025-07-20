#include<bits/stdc++.h>
using namespace std;

bool checkDivisibility(int n) {
    int sum=0,pro=1,ans,num=n;
    while(n!=0){
        int digit=n%10;
        sum+=digit;
        pro*=digit;
        n/=10;
    }
    ans=sum+pro;
    if(num%ans==0){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    int result=checkDivisibility(num);
    if(result==1){
        cout<<num<<" is divisible by sum and product of the digit";
    }
    else{
        cout<<num<<" is not divisible by sum and product of the digit";
    }
}