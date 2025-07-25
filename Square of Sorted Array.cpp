#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1, pos = n - 1;

        while (left <= right) {
            int leftSq = nums[left] * nums[left];
            int rightSq = nums[right] * nums[right];

            if (leftSq > rightSq) {
                result[pos--] = leftSq;
                left++;
            } else {
                result[pos--] = rightSq;
                right--;
            }
        }
        return result;
    }
};

int main() {
    Solution sol;
    int n;
    
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " integers in non-decreasing order:\n";
    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<int> result = sol.sortedSquares(nums);

    cout << "Sorted squares: ";
    for (int val : result)
        cout << val << " ";
    cout << endl;

    return 0;
}