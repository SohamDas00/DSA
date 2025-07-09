#include<iostream>
using namespace std;

int count(int n) {
    int count=0;
    while(n>0){
        int digit=n%10;
        count++;
        n/=10;
    }
    return count;
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    cout<<"The number of digit is: "<<count(num);
}