#include<iostream>
using namespace std;

int main(){
    pair<int,int>p={2,3};
    cout<<p.first<<" "<<p.second<<endl;
    pair<int,int>arr[]={{2,3},{3,4},{4,5}};
    cout<<arr[0].first<<" "<<arr[2].second;
}