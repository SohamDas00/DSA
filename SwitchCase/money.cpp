#include<iostream>
using namespace std;

int main(){
    int money,ans=0;
    int count100=0,count50=0,count20=0,count10=0;
    cout<<"Enter amount: ";
    cin>>money;
    switch(money/100){
        case 0:
            break;
        default:
            count100=(money/100);
            money=money%100;
            break;
    }
    switch(money/50){
        case 0:
            break;
        default:
            count50=(money/50);
            money=money%50;
            break;
    }
    switch(money/20){
        case 0:
            break;
        default:
            count20=(money/20);
            money=money%20;
            break;
    }
    switch(money/10){
        case 0:
            break;
        default:
            count10=(money/10);
            money=money%10;
            break;
    }
    cout<<" no. of RS.100:- "<<count100<<endl;
    cout<<" no. of RS.50:- "<<count50<<endl;
    cout<<" no. of RS.20:- "<<count20<<endl;
    cout<<" no. of RS.10:- "<<count10<<endl;

}