#include <iostream>
#include <vector>
using namespace std;
class Solution 
{
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result(nums.size());
        result[0] = nums[0];
        for (int i = 1; i < nums.size(); ++i) 
        {
            result[i] = result[i - 1] + nums[i];//each element is the sum of previous sum and current nums
        }
        return result;
    }
};
int main() 
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter " << n << " integers:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    Solution obj;
    vector<int> result = obj.runningSum(nums);
    cout << "Running Sum: ";
    for (int val : result) 
    {
        cout << val << " ";
    }
    return 0;
}