#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target)
{
	int left = 0;
	int right = nums.size()-1;
	while(left<=right)
	{
		int mid = left +(right-left)/2;
		cout << "Left: " << left << ", Right: " << right << ", Mid: " << mid << ", nums[Mid]: " << nums[mid] << endl;
		if (nums[mid] == target)
		return mid;
		if (nums[mid]<target)
		left = mid + 1;
		else 
		right = mid - 1;
	}
	return -1;
}
int main()
{
	int n,target,i;
	cout<<"Enter the size of the array : ";
	cin >> n;
	vector<int> nums(n);
	cout<<"Enter the elements of the array : ";
	for(i=0;i<n;i++)
	{
		cin>>nums[i];
	}
	cout << "Enter the target value to search for: ";
    cin >> target;

    int result = search(nums, target);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}
