#include<bits/stdc++.h>
using namespace std;

void subsequence(int i,vector<int>vec2,vector<int>vec,int sum,int totalSum){
    int size=vec.size();
    if(i==size){
        if(totalSum==sum){
            for(auto it:vec2){
                cout<<it<<" ";
            }
            cout<<endl;
        } 
        return;
    }

    vec2.push_back(vec[i]);
    totalSum+=vec[i];
    subsequence(i+1,vec2,vec,sum,totalSum);
    totalSum-=vec[i];
    vec2.pop_back();
    subsequence(i+1,vec2,vec,sum,totalSum);
    //subsequence logic
}

int main(){
    int size,i=0;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    vector<int>vec2;
    int sum;
    cout<<"Enter sum: ";
    cin>>sum;
    int totalSum=0;
    cout<<"The subsequence sum of vector are: "<<endl;
    subsequence(i,vec2,vec,sum,totalSum);
}