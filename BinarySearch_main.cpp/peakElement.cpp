#include<bits/stdc++.h>
using namespace std;

vector<int> peak(vector<int>vec){
    vector<int>ans;
    for(int i=1;i<vec.size()-1;i++){
        if(vec[i]>vec[i-1] && vec[i]>vec[i+1]){
            ans.push_back(vec[i]);
        }
    }
    return ans;
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
    vector<int>ansMain=peak(vec);
    int s=ansMain.size();
    if(s>0){
        cout<<"The peak element is: ";
        for(auto i:ansMain){
            cout<<i<<" ";
        }
    }
    else{
        cout<<"No peak element";
    }
}