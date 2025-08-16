#include<bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> arr, int n, int x) {
	int start=0;
	int end=n-1;
	int ans=x;

	while(start<=end){
		int mid=start+(end-start)/2;
		if(arr[mid]>=x){
			ans=mid;
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
	return ans;
    //return (lower_bound(arr.begin(),arr.end(),x)-arr.begin());
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
    int ans=lowerBound(vec,size,target);
    cout<<"The lower bound of the array for this target is: "<<ans;
}