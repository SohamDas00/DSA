#include<bits/stdc++.h>
using namespace std;

void subsequence(int i,vector<int>vec2,vector<int>vec){
    int size=vec.size();
    if(i==size){
        for(auto it:vec2){
            cout<<it<<" ";
        }
        if(vec2.size()==0){
            cout<<"{}";
        }
        cout<<endl;
        return;
    }

    vec2.push_back(vec[i]);
    subsequence(i+1,vec2,vec);
    vec2.pop_back();
    subsequence(i+1,vec2,vec);
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
    cout<<"The subsequence vector are: "<<endl;
    subsequence(i,vec2,vec);
}