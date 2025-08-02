#include<bits/stdc++.h>
using namespace std;


int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    sort(vec.begin(),vec.end());
    cout<<"The sorted array is: ";
    for(int i=0;i<size;i++){
        cout<<vec[i]<<" ";
    }
}
