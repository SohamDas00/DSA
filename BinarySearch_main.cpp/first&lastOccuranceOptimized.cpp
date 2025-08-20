#include<bits/stdc++.h>
using namespace std;

pair<int,int> firstandlast(vector<int>vec,int num){
   auto first=lower_bound(vec.begin(),vec.end(),num);
   auto second=upper_bound(vec.begin(),vec.end(),num);
   if(first==vec.end() || *first!=num) return {-1,-1};
   int low=first-vec.begin();
   int high=second-vec.begin();
   return {low,high-1};
}

int main(){
    int size,num;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter number: ";
    cin>>num;
    pair<int,int> ansMain=firstandlast(vec,num);
    cout<<"The first occurance is: "<<ansMain.first<<endl;
    cout<<"The second occurance is: "<<ansMain.second;
}