#include<bits/stdc++.h>
using namespace std;

pair<int,int> firstandlast(vector<int>vec,int num){
    int ans1=-1,ans2=-1;
    for(int i=0;i<vec.size();i++){
        if(vec[i]==num){
            if(ans1==-1){
                ans1=i;
            }
            else{
                ans2=i;
            }
        }
    }
    return {ans1,ans2};
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