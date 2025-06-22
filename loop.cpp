#include<iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter digit: ";
    cin>>num;
    for(int j=2;j<num;j++){
        if(num%j==0){
            cout<<num<<" is not a prime number"<<endl;
            break;
        }
        else{
            cout<<num<<" is prime number"<<endl;
            break;
        }
    }
    int i=1, sum=0,sum_even=0,sum_odd=0;
    cout<<"The series is: "<<endl;
    while(i<=num){
        cout<<i<<" ";
        sum+=i;
        if(i%2==0){
            sum_even+=i;
        }
        else{
            sum_odd+=i;
        }
        i++;
    }
    cout<<endl;
    cout<<"The sum of series is: "<<sum<<endl;
    cout<<"The sum of even number series is: "<<sum_even<<endl;
    cout<<"The sum of odd number series is: "<<sum_odd<<endl;
}