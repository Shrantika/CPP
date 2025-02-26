#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n=5;
	int arr[5] = {1,2,3,4,5};
	int max_Sum = INT_MIN;
	int st,end,i;
	for(st=0;st<n;st++)
	{
		int curr_sum = 0;
		for(end=st;end<n;end++)
		{
			curr_sum += arr[end];
			max_Sum = max(curr_sum,max_Sum);
		}
	
	}
	cout<<"Max subarray sum = "<<max_Sum<<endl;
	return 0;
}
