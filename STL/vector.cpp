#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> vec={1,2,3,4,5};
    vec.push_back(6);
    vec.emplace_back(7);//emplace_back is faster than push_back
    cout<<vec[1]<<endl;
    for(auto i:vec){
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> vec2(5,100);//This store total 5 - 100.
    for(auto j:vec2){
        cout<<j<<" ";
    }
    cout<<endl;
    vec2.insert(vec2.begin(),300);
    for(auto k:vec2){
        cout<<k<<" ";
    }
}