#include<iostream>
using namespace std;

int sqrt(int num){
    int low=0,high=num;
    int ans=1;
    while(low<=high){
        long long mid=low+(high-low)/2;
        long long val=mid*mid;
        if(val<=num){
            ans=mid;
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"The square root of the number is: "<<sqrt(num);
}