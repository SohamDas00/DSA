#include<iostream>
using namespace std;

int func(int target,int sum){
    if(target==0) return sum;
    sum+=target;
    func(target-=1,sum);
}

int main(){
    int target,sum=0;
    cout<<"Enter target: ";
    cin>>target;
    cout<<"The sum of target is: "<<func(target,sum);
}