#include<bits/stdc++.h>
using namespace std;

int countSubarray(vector < int > & arr, int k) {
   int count=0;
   for(int i=0;i<arr.size();i++){
       int sum=0;
       for(int j=i;j<arr.size();j++){
           sum+=arr[j];
           if(sum==k){
               count++;
            }
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