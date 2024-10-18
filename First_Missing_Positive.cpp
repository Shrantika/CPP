#include<bits/stdc++.h>
using namespace std;

int FirstMissing(int arr[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		while(arr[i]>0 && arr[i]<=n && arr[arr[i]-1] != arr[i])
		{
			swap(arr[i],arr[arr[i]-1]);
		}
	}
	cout<<"Rearranged Array : ";
	for(i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(i=0;i<n;i++)
	{
		if(arr[i] != i+1)
		{
			return i+1;
		}
	}
	return n+1;
}
int main()
{
	int t;
	cout<<"Enter the number of test cases : ";
	cin>>t;
	while(t--)
	{
		int n,i;
		cout<<"Enter the size of the array : ";
		cin>>n;
		int* arr = new int[n];
		cout<<"Enter the array elements : ";
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<"Smallest missing positive integer : "<<FirstMissing(arr,n)<<endl;
	}
	return 0;
}
