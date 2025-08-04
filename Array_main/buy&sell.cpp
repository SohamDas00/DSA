#include<bits/stdc++.h>
using namespace std;

int buysell(vector<int>vec){
    int minBuy=vec[0],maxProfit=INT_MIN;
    for(int i=1;i<vec.size();i++){
        minBuy=min(minBuy,vec[i]);
        maxProfit=max(maxProfit,vec[i]-minBuy); 
    }  
    return maxProfit;
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
    cout<<"The max profit from this is: "<<buysell(vec);
}