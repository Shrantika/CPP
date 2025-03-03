#include <iostream>
#include <vector>

using namespace std;

vector<int> pivotArray(vector<int>& nums, int pivot) {
    vector<int> less, equal, greater;
    int n = nums.size();
    // Partition the numbers into three less,equal,greater lists using a normal for loop
    for (int i = 0; i < n; i++) {
        if (nums[i] < pivot) 
		{
            less.push_back(nums[i]);//less
        } 
		else if (nums[i] == pivot) 
		{
            equal.push_back(nums[i]);//equal
        } else 
		{
            greater.push_back(nums[i]);//great
        }
    }

    // Concatenate the three lists
    vector<int> result;
    result.reserve(n);  // Reserve space for efficiency
    for (int i = 0; i < less.size(); i++) 
	{
        result.push_back(less[i]);
    }
    for (int i = 0; i < equal.size(); i++)
    {
        result.push_back(equal[i]);
    }
    for (int i = 0; i < greater.size(); i++) 
	{
        result.push_back(greater[i]);
    }
    return result;
}

int main() 
{
    vector<int> nums = {9, 12, 5, 10, 14, 3, 10};
    int pivot = 10;
   vector<int> result = pivotArray(nums, pivot);
    for (int i = 0; i < result.size(); i++) 
	{
        cout << result[i] << " ";
    }

    return 0;
}
