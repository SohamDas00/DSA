#include<iostream>
using namespace std;

int fact(int num){
    int ans=1;
    for(int i=num;i>=1;i--){
        ans*=i;
    }
    return ans;
}

int nCr(int n,int r){
    int numerator=0,denomenator=0;
    numerator=fact(n);
    denomenator=fact(r)*fact(n-r);
    int result=numerator/denomenator;
    return result;
}

int main(){
    int n,r;
    cout<<"Enter value of n and r: ";
    cin>>n>>r;
    cout<<"The ans is: "<<nCr(n,r);
}