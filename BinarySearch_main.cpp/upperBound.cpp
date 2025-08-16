#include<bits/stdc++.h>
using namespace std;

int upperBound(vector<int> &arr, int n, int x){
	return (upper_bound(arr.begin(),arr.end(),x)-arr.begin());
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"Enter vector: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    int target;
    cout<<"Enter target: ";
    cin>>target;
    int ans=upperBound(vec,size,target);
    cout<<"The Upper bound of the array for this target is: "<<ans;
}