#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void sortOddEven(vector<int>& nums)
{
	vector<int> odds,evens;
	int i;
	for(i=0;i<nums.size();i++)
	{
		int num = nums[i];
		if(num%2 == 0)
		evens.push_back(num);
		else
		odds.push_back(num);
		
	}
	sort(odds.begin(),odds.end(),greater<int>());
	sort(evens.begin(),evens.end());
	int index = 0;
	for(i=0;i<odds.size();i++)
	 nums[index++]=odds[i];
	for(i=0;i<evens.size();i++)
	 nums[index++]=evens[i];
	
}
int main() {
    vector<int> nums ;
     nums.push_back(2);
    nums.push_back(5);
    nums.push_back(3);
    nums.push_back(6);
    sortOddEven(nums);
    for (int i = 0; i < nums.size(); i++) {
        cout << nums[i] << " ";  
    }
    cout << endl;

    return 0;
}
