#include<iostream>
using namespace std;

void func(int a,int n){
    if(n<a) return;
    func(a,n-1);
    cout<<n<<endl;
}

int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    func(1,n);
}