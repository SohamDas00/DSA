#include <bits/stdc++.h>
using namespace std;

int func(int val,int n,long long m){
    long long ans=1;
    for(int i=0;i<n;i++){
        ans*=val;
        if(ans>m) return m+1; // prevent overflow & early exit
    }
    return ans;
}

int NthRoot(int n, int m) {
    int low=1, high=m;  // root can't be 0 unless m=0
    while(low<=high){
        int mid=low+(high-low)/2;
        long long value=func(mid,n,m);

        if(value==m) return mid;
        else if(value>m) high=mid-1;
        else low=mid+1;
    }
    return -1;
}

int main() {
    int n, m;
    cout << "Enter n and m: ";
    cin >> n >> m;

    int result = NthRoot(n, m);

    if(result == -1)
        cout << "No integer " << n << "th root exists for " << m << endl;
    else
        cout << "The " << n << "th root of " << m << " is: " << result << endl;

    return 0;
}
