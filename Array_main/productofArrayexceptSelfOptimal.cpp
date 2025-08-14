#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int countZero = 0;
        int product = 1;
        for (int num : nums) {
            if (num == 0) countZero++;
            else product *= num;
        }

        vector<int> ans(nums.size(), 0);

        if (countZero > 1) {
            return ans;
        }
        else if (countZero == 1) {
            for (int i = 0; i < nums.size(); i++) {
                if (nums[i] == 0) {
                    ans[i] = product;
                    break;
                }
            }
        }
        else {
            for (int i = 0; i < nums.size(); i++) {
                ans[i] = product / nums[i];
            }
        }
        return ans;
    }
};

int main() {
    int size;
    cout << "Enter size: ";
    cin >> size;

    vector<int> nums(size);
    cout << "Enter elements: ";
    for (int i = 0; i < size; i++) {
        cin >> nums[i];
    }

    Solution obj;
    vector<int> result = obj.productExceptSelf(nums);

    cout << "Output: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
//O(n)