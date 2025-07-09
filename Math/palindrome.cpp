#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    int ans=0,digit,n=x;
    while(x!=0){
        digit=x%10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7))  return false;
        
        ans=ans*10+digit;
        x/=10;
    }
    if(n==ans){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    int ans=isPalindrome(num);
    if(ans==1){
        cout<<num<<" is palindrome";
    }
    else{
        cout<<num<<" is not palindrome";
    }
}