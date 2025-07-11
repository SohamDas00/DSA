#include<iostream>
using namespace std;

int sum(int num){
    if(num==0) return 0;
    int ans=num+sum(num-1);
    return ans;
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    cout<<"The sum :"<<sum(num);
}