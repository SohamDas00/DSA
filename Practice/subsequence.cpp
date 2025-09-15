#include<bits/stdc++.h>
using namespace std;

void subsequence(int ind,vector<int>vec,vector<int>vec_ans){
    int size=vec.size();
    if(ind==size){
        for(auto i:vec_ans){
            cout<<i<<" ";
        }
        if(vec_ans.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }
    vec_ans.push_back(vec[ind]);
    subsequence(ind+1,vec,vec_ans);
    vec_ans.pop_back();
    subsequence(ind+1,vec,vec_ans);
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
    cout<<"The subsequence are: "<<endl;
    subsequence(0,vec,ans);
}