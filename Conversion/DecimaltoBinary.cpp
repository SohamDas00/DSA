#include<iostream>
#include<bitset>
using namespace std;

int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    int count=0;
    bitset<32>bit(n);
    cout<<bit<<endl;
    while(n!=0){
        count=count+(n&1);
        n=n>>1;
    }
    cout<<"The bit-number is: "<<count;
}