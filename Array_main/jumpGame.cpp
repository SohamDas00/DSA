#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canJump(vector<int>& nums) {
        int farthest = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (i > farthest) return false; // can't reach this position
            farthest = max(farthest, i + nums[i]);
        }
        return true;
    }
};

int main() {
    Solution sol;

    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if (sol.canJump(nums))
        cout << "true" << endl;
    else
        cout << "false" << endl;

    return 0;
}
