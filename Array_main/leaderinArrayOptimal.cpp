#include<bits/stdc++.h>
using namespace std;

vector<int> checkLeader(vector<int> vec){
    int maximum=INT_MIN;
    vector<int>ans;
    for(int i=vec.size()-1;i>=0;i--){
        if(vec[i]>maximum){
            maximum=max(vec[i],maximum);
            ans.push_back(vec[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"The vector are: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    vector<int>ansMain=checkLeader(vec);
    cout<<"The leader of vector are: ";
    for(auto i:ansMain){
        cout<<i<<" ";
    }
}