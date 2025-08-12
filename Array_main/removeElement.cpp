#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        nums.erase(remove(nums.begin(), nums.end(), val), nums.end());
        return nums.size();
    }
};

int main() {
    int size, value;
    cout << "Enter size: ";
    cin >> size;

    vector<int> vec(size);
    cout << "Enter vector elements: ";
    for (int i = 0; i < size; i++) {
        cin >> vec[i];
    }

    cout << "Enter value to remove: ";
    cin >> value;

    Solution sol;
    int newSize = sol.removeElement(vec, value);

    cout << "New size: " << newSize << "\n";
    cout << "Modified vector: ";
    for (int i = 0; i < newSize; i++) {
        cout << vec[i] << " ";
    }
    cout << "\n";

    return 0;
}
