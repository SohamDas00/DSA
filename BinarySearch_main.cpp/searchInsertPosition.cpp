#include <bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>& arr, int m)
{
    int start=0;
    int end=arr.size()-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==m){
            return mid;
        }
        else if(arr[mid]<m){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
    }
    return start; 
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter sorted array: ";
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }

    int target;
    cout << "Enter target: ";
    cin >> target;

    int index = searchInsert(arr, target);
    cout << "Target should be at index: " << index << endl;
    arr.insert(arr.begin()+index,target);
    cout<<"The final array after insert: ";
    for(auto i:arr){
        cout<<i<<" ";
    }
    return 0;
}
