#include<iostream>
using namespace std;

int main(){
    int range;
    cout<<"Enter range: ";
    cin>>range;
    int f1=0,f2=1,sum=0;
    cout<<"The fibonacci series is: "<<f1<<" "<<f2<<" ";
    for(int i=2;i<range;i++){
        sum=f1+f2;
        cout<<sum<<" ";
        f1=f2;
        f2=sum;
    }
}