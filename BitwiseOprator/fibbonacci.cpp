#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    int a=0,b=1;
    cout<<"The fibbonacci series is: "<<endl;
    for(int i=0;i<n-2;i++){
        if(i==0){
            cout<<a<<", ";
        }
        if(i==1){
            cout<<b<<", ";
        }
        int c=a+b;
        a=b;
        b=c;
        cout<<c<<", ";
    }
}