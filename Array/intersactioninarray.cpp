#include<iostream>
#include<vector>
using namespace std;

vector<int> intersection(vector<int> &arr1,vector<int> &arr2, int n,int m){
    int i=0,j=0;
    vector<int> result;
    while(i<n && j<m){
        if(arr1[i]==arr2[j]){
            result.push_back(arr1[i]);
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return result;
}

int main(){
    vector<int> arr1;
    vector<int> arr2;
    int n,m;
    int i,j;
    cout<<"Enter size of arr1: ";
    cin>>n;
    cout<<"Enter size of arr2: ";
    cin>>m;
    cout<<"The array 1 is: ";
    for(i=0;i<n;i++){
        int val;
        cin>>val;
        arr1.push_back(val);
    }
    cout<<"The array 2 is: ";
    for(j=0;j<m;j++){
        int val;
        cin>>val;
        arr2.push_back(val);
    }
    vector<int> inter =intersection(arr1,arr2,n,m);
    cout<<"The intersection of array1 and array2 is: ";
    for(int val : inter){
        cout<<val<<" ";
    }
}