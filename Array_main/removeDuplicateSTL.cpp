#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        nums.erase(unique(nums.begin(), nums.end()), nums.end());
        return nums.size();
    }
};

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter sorted vector elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    Solution sol;
    int newSize = sol.removeDuplicates(nums);

    cout << "New size: " << newSize << "\n";
    cout << "Modified vector: ";
    for (int i = 0; i < newSize; i++) {
        cout << nums[i] << " ";
    }
    cout << "\n";

    return 0;
}
