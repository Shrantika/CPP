/*You have been given an array ‘a’ of ‘n’ non-negative integers.You have to check whether the given array is sorted in the non-decreasing order or not.



Your task is to return 1 if the given array is sorted. Else, return 0.*/



#include<iostream>
#include<vector>
using namespace std;

int isSorted(int n,vector<int>a)
{
	int i;
	for(i=0;i<n-1;i++)
	{
		if(a[i]>a[i+1])
		{
			return 0;
		}
	}
	return 1;
	
}
int main()
{
	int n,i;
	cout<<"Enter the number of elments";
	cin>>n;
	vector<int>a(n);
	cout<<"Enter the elements of the array";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int result = isSorted(n,a);
	cout<<"Output :"<<result<<endl;
	return 0;
}

