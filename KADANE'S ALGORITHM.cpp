#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

class Subarray_sum
{
	private:
		vector<int> nums;
	public:
		Subarray_sum(int n)
		{
			nums.resize(n);
			cout<<"Enter"<<n<<"elements: ";
			int i;
			for(i=0;i<n;i++)
			{
				cin>>nums[i];
			}
		}
		int MaxAbsSum()
		{
			int max_sum=0,min_sum=0,currMax=0,currMin=0;
			int i;
			for(i=0;i<nums.size();i++)
			{
				currMax = max(nums[i],currMax+nums[i]);
				currMin = min(nums[i],currMin+nums[i]);
				max_sum = max(max_sum,currMax);
				min_sum = min(min_sum,currMin);
			}
			return max(max_sum,abs(min_sum));
		}
};
int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	Subarray_sum obj(n);
	cout<<"Maximum absolute sum : "<<obj.MaxAbsSum()<<endl;
	return 0;
}
