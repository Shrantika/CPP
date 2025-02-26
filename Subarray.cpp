#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n=5;
	int arr[5] = {1,2,3,4,5};
	int st,end,i;
	for(st=0;st<n;st++)
	{
		for(end=st;end<n;end++)
		{
			for(i=st;i<=end;i++)
			{
				cout<<arr[i];
			}
			cout<<endl;
		}
	
	}
		return 0;
}
