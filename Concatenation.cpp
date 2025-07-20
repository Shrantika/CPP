#include <iostream>
#include <vector>
using namespace std;

class Solution 
{
public:
    vector<int> getConcatenation(vector<int>& nums) 
    {
        int n = nums.size();
        vector<int> ans(2 * n);//total size after concatenation
        for (int i = 0; i < n; i++) 
        {
            ans[i] = nums[i];
            ans[i + n] = nums[i];
        }
        return ans;
    }
};

int main()
 {
    Solution obj;  // Create an object of the class
    vector<int> nums = {1, 2, 1};
    vector<int> result = obj.getConcatenation(nums);  // Call the method

    for (int val : result)
        cout << val << " ";
    
    return 0;
}