#include<iostream>
#include<string>
using namespace std;

string oddeven(int num){
    string temp;   


      
    if(num%2==0){
        temp="even";
    }
    else{
        temp="odd";
    }
    return temp;
}

int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"The number is: "<<oddeven(num);
}