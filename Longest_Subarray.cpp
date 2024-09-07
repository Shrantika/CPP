#include <bits/stdc++.h> 
using namespace std;
int getLongestSubarray(vector<int> &num,int k)
{
	int n = num.size();
	int max_length = 0;
	int i,j;
	for(i=0;i<n;i++)
	{
		int sum = 0;
		for(j=i;j<n;j++)
		{
			sum +=num[j];
			if(sum == k)
		{
		    int length = j-i+1;
			max_length = max(max_length,length); 
		}
		}
	}
	return max_length;
}
int main()
{
	int n,k,i;
	cout<<"Enter the size of the array : ";
	cin>>n;
	vector<int> num(n);
	cout<<"Enter the elements of the array : ";
	for(i=0;i<n;i++)
	{
		cin>>num[i];
	}
	cout<<"Enter the value of k : ";
	cin>>k;
	int result = getLongestSubarray(num,k);
	cout<< "The length of the longest subarray" << k << " is : " << result <<endl;
	return 0;
	
}
