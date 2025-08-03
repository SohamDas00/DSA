#include<bits/stdc++.h>
using namespace std;

maxSubarray(vector<int>vec){
    int max=INT_MIN;
    for(int i=0;i<vec.size();i++){
        int sum=0;
        for(int j=i;j<vec.size();j++){
            sum+=vec[j];
            if(sum>max){
                max=sum;
            }
        }
    }
    return max;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin>>size;
    vector<int>vec(size);
    cout<<"The array is: ";
    for(int i=0;i<size;i++){
        cin>>vec[i];
    }
    cout<<"The max sum is: "<<maxSubarray(vec);
}