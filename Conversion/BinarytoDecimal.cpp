#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter value: ";
    cin>>n;
    int ans=0,i=0;
    while(n!=0){
        int digit=n%10;
        if(digit==1){
            ans=ans+pow(2,i);
        }
        n=n/10;
        i++;
    }
    cout<<"The decimal is: "<<ans;
}