#include <bits/stdc++.h>
using namespace std;

pair<int, int> getFloorAndCeil(vector<int> &a, int n, int x) {
    int start = 0;
    int end = n - 1;
    int floorValue = -1, ceilValue = -1;

    // Find floor
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (a[mid] <= x) {
            floorValue = a[mid];
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    // Find ceil
    start = 0;
    end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;
        if (a[mid] >= x) {
            ceilValue = a[mid];
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }

    return {floorValue, ceilValue};
}

int main() {
    int n, x;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter " << n << " elements (sorted): ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number x: ";
    cin >> x;

    pair<int, int> ans = getFloorAndCeil(arr, n, x);
    cout << "Floor: " << ans.first << ", Ceil: " << ans.second << endl;

    return 0;
}
