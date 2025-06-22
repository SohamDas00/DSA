#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    if(age>18){
        cout<<"Eligible to vote"<<endl;
    }
    else{
        cout<<"Not eligible to vote"<<endl;
    }

    int num;
    cout<<"Enter value of num: ";
    cin>>num;
    if(num>0){
        cout<<"The number is positive"<<endl;
    }
    else if(num<0){
        cout<<"The number is negative"<<endl;
    }
    else{
        cout<<"The number is Zero"<<endl;
    }

    char ch;
    cout<<"Enter chracter: ";
    cin>>ch;
    if(ch>='A' && ch<='Z'){
        cout<<"Uppercase Letter";
    }
    else if(ch>='a' && ch<='z'){
        cout<<"Lowercase Letter ";
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Digit";
    }
    else{
        cout<<"Symbol";
    }
}