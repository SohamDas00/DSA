#include<bits/stdc++.h>
using namespace std;

int findMin(vector<int>& arr)
{
	int low=0,high=arr.size()-1;
	int ans=INT_MAX;
	while(low<=high){
		int mid=low+(high-low)/2;
		if(arr[low]<=arr[mid]){
			ans=min(arr[low],ans);
			low=mid+1;
		}
		else{
			ans=min(arr[mid],ans);
			high=mid-1;
		}
	}
	return ans;
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
    cout<<"The minimum element is : "<<findMin(vec);
}