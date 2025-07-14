#include<bits/stdc++.h>
using namespace std;

int main(){
    int size,arr[100];
    cout<<"Enter value: ";
    cin>>size;
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    int hash[100]={0};
    for(int i=0;i<size;i++){
        hash[arr[i]]+=1;
    }

    cout<<"The no. of quary: ";
    int num2;
    cin>>num2;
    while(num2--){
        int number;
        cin>>number;
        cout<<"Total is: "<<hash[number]<<endl;
    }
}