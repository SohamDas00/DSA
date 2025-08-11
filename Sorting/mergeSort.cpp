#include <iostream>
#include <vector>
using namespace std;

void merge(int arr[], int l, int mid, int r) {
    vector<int> temp;
    int i = l, j = mid + 1;

    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]) temp.push_back(arr[i++]);
        else temp.push_back(arr[j++]);
    }

    while (i <= mid) temp.push_back(arr[i++]);
    while (j <= r) temp.push_back(arr[j++]);

    for (int k = l; k <= r; k++) {
        arr[k] = temp[k - l];
    }
}

void mS(int arr[], int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    mS(arr, l, mid);
    mS(arr, mid + 1, r);
    merge(arr, l, mid, r);
}

void mergeSort(int arr[], int l, int r) {
    mS(arr, l, r);
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n]; 
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
