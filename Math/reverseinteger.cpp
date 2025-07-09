#include<bits/stdc++.h>
using namespace std;

int reverse(int x) {
    int ans=0,digit;
    while(x!=0){
        digit=x%10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && digit > 7))  return 0;
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && digit < -8)) return 0;
        ans=ans*10+digit;
        x/=10;
    }
    return ans;
}

int main(){
    int num;
    cout<<"Enter value: ";
    cin>>num;
    cout<<"The reverse of digit is: "<<reverse(num);
}