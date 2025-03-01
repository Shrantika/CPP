#include <iostream>
#include <vector>
using namespace std;

class ArrayProcessor
{
	private:
		vector<int> nums;
	public:
		ArrayProcessor(int size)
		{
			nums.resize(size);
			cout<<"Enter"<<size<<"non-negative numbers : ";
			int i;
			for(i=0;i<size;i++)
			{
				cin>>nums[i];
			}
		}
		void applyOperations()
		{
			int n = nums.size();
			int i;
			for(i=0;i<n-1;i++)
			{
				if(nums[i] == nums[i+1] && nums[i] != 0)
				{
					nums[i] = nums[i]*2;
					nums[i+1] = 0;
				}
			}
			shiftZeroes();
		}
		void shiftZeroes()
		{
			int n = nums.size();
			vector<int> temp;
			int i;
			for(i=0;i<n;i++)
			{
				if(nums[i] != 0)
				{
					temp.push_back(nums[i]);
				}
			}
			while(temp.size()<n)
			{
				temp.push_back(0);
			}
			nums = temp;
		}
		void display()
		{
			cout<<"Resulting array : ";
			int i;
			for(i=0;i<nums.size();i++)
			{
				cout<<nums[i]<<" ";
			}
			cout<<endl;
		}
};
int main()
{
	int n;
	cout<<"Enter the size of the array : ";
	cin>>n;
	ArrayProcessor obj(n);
	obj.applyOperations();
	obj.display();
	return 0;
}
