#include<bits/stdc++.h>
using namespace std;

bool armstrong(int num){
    int duplicate=num;
    string digit=to_string(num);
    int count=digit.size();
    int d,sum=0;
    while(num>0){
        d=num%10;
        int power=1;
        for(int i=1;i<=count;i++){
            power*=d;
        }
        sum+=power;
        num/=10;
    }
    if(sum==duplicate){
        return true;
    }
    else{
        false;
    }
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    int ar=armstrong(num);
    if(ar==1){
        cout<<num<<" is armstrong number";
    }
    else{
        cout<<num<<" is not armstrong number";
    }
}