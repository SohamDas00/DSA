#include<bits/stdc++.h>
using namespace std;

int countSubarray(vector < int > & arr, int k) {
   int count=0,sum=0,left=0;
   for(int right=0;right<arr.size();right++){
        sum+=arr[right];

        while(sum>k && left<=right){
            sum-=arr[left];
            left++;
        }
        
        if(sum==k){
            count++;
        }
   }
   return count;
}

int main(){
    int size,sum;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"The vector is: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"Enter sum: ";
    cin>>sum;
    cout<<"Count all Subarray with given sum: "<<countSubarray(vec,sum);
}