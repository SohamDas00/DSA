#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &array,int num){
    vector<vector<int>> ans;
    for(int i=0;i<array.size();i++){
        for(int j=i+1;j<array.size();j++){
            if(array[i]+array[j]==num){
                vector<int> temp;
                temp.push_back(min(array[i],array[j]));
                temp.push_back(max(array[i],array[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}

int main(){
    int num,size;
    cout<<"Enter target: ";
    cin>>num;
    cout<<"Enter size: ";
    cin>>size;
    vector<int> array(size);
    cout<<"Enter array: ";
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    vector<vector<int>> main_ans=pairSum(array,num);
    for(auto val:main_ans){
        cout<<val[0]<<" "<<val[1]<<endl;
    }

}