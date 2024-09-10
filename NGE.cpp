#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
	
	vector<int> nge(n,-1);
	stack<int> s;
	for(int i=n-1;i>=0;i--)
	{
		while(!s.empty() && s.top() <= arr[i])
		{
			s.pop();
		}
		if(!s.empty())
		{
			nge[i]= s.top();
		}
		s.push(arr[i]);
	}
	return nge;
}
int main()
{
	
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    vector<int> arr(n); 

    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }

    vector<int> nge = nextGreaterElement(arr, n); 

    cout << "Next Greater Elements: ";
    for (int i = 0; i < nge.size(); i++) {
        cout << nge[i] << " "; 
    }
    cout << endl;

    return 0;
}

