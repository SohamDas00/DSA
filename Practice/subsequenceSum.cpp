#include<bits/stdc++.h>
using namespace std;

void subsequenceSum(int ind,vector<int>vec,vector<int>vec_ans,int sum,int s){
    int size=vec.size();
    if(ind==size){
        if(s==sum){
            for(auto i:vec_ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    vec_ans.push_back(vec[ind]);
    s+=vec[ind];
    subsequenceSum(ind+1,vec,vec_ans,sum,s);
    s-=vec[ind];
    vec_ans.pop_back();
    subsequenceSum(ind+1,vec,vec_ans,sum,s);
}

int main(){
    int size;
    vector<int>ans;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    int sum;
    cout<<"Enter sum: ";
    cin>>sum;
    cout<<"The subsequence are: "<<endl;
    int s=0;
    subsequenceSum(0,vec,ans,sum,s);
}