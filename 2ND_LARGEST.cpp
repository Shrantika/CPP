#include<iostream>
#include<vector>
using namespace std;

class Solution
{

public:
	int getSecondLargest(vector<int> &arr)
	{
		if(arr.size()<2)
		{
			return -1;
		}
		int largest = INT_MIN , secondLargest = INT_MIN;
		for(size_t i=0;i<arr.size();i++)
		{
			if(arr[i]>largest)
			{
				secondLargest = largest;
				largest = arr[i];
			}else if (arr[i]>secondLargest && arr[i] != largest)
			{
				secondLargest = arr[i];
			}
		}
		return(secondLargest == INT_MIN)? -1:secondLargest;
		
	}
};
int main()
{
	Solution obj;

    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    if (n < 1) {
        cout << "Array must have at least one element!" << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = obj.getSecondLargest(arr);
    if (result == -1) {
        cout << "No second largest element exists!" << endl;
    } else {
        cout << "The second largest element is: " << result << endl;
    }

    return 0;
}
	
