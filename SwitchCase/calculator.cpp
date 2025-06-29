#include<iostream>
using namespace std;

int main(){
    int num1,num2,ans=0;
    char op;
    cout<<"Enter value of num1: ";
    cin>>num1;
    cout<<"Enter value of num2: ";
    cin>>num2;
    cout<<"Enter Operation: ";
    cin>>op;

    switch(op){
        case '+':
            ans=num1+num2;
            break;
        case '-':
            ans=num1-num2;
            break;
        case '*':
            ans=num1*num2;
            break;
        case '/':
            ans=num1/num2;
            break;
        default:
            cout<<"No Valid operation"<<endl;
    }
    cout<<"The result is: "<<ans;
}