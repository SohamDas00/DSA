#include<bits/stdc++.h>
using namespace std;

int maxProfit(vector<int>& prices) {
    int sum=0;
    for(int i=1;i<prices.size();i++){
        if(prices[i]>prices[i-1]){
            sum+=prices[i]-prices[i-1];
        }
    }
    return sum;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"The max profit in Buy&Sell 2 is: "<<maxProfit(vec);
}