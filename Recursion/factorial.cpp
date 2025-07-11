#include<iostream>
using namespace std;

int fac(int num){
    if(num==0) return 1;
    int ans=num*fac(num-1);
    return ans;
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    cout<<"The factorial is :"<<fac(num);
}