#include<iostream>
#include<vector>
using namespace std;
int linearSearch(int n, int num, vector<int> &arr)
{
    int i;
    for(i=0;i<n;i++)
    {
    	if(arr[i]==num)
    	{
    		return i;
		}
	}
	return -1;
}
int main()
{
	int n,num,i,result;
	
	cout << "Enter the number of elements in the array and the element to search for: ";
    cin >> n >> num;
    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	result = linearSearch(n,num,arr);
	
	if(result != -1)
	{
		cout<<"Element found at the index "<<result<<endl;
	}
	else
	{
		cout<<"Element not found"<<endl;
	}
	return 0;
}
