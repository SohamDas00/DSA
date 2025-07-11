#include<bits/stdc++.h>
using namespace std;

void func(int num){
    if(num==5) return;
    cout<<"Soham Das"<<endl;
    num++;
    func(num);
}

int main(){
    int num=0;
    func(num);
}