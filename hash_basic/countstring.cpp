#include<bits/stdc++.h>
using namespace std;

int hashing[100];
int main(){
    string name;
    cout<<"Enter name: ";
    cin>>name;

    for(int i=0;i<name.size();i++){
        hashing[name[i]-'a']+=1;
    }

    int num;
    cout<<"Enter quary: ";
    cin>>num;
    while(num--){
        char num2;
        cin>>num2;
        cout<<"The total: "<<hashing[num2-'a']<<endl;
    }
}