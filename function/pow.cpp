#include<iostream>
#include<math.h>
using namespace std;

int power(int a,int b){
    int ans=0;
    ans=pow(a,b);
    return ans;
}

int main(){
    int a,b;
    cout<<"Enter value of a:";
    cin>>a;
    cout<<"Enter value of b:";
    cin>>b;
    cout<<power(a,b);
}