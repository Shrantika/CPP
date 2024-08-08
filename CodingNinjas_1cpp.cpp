
#include <iostream>
#include <vector>
#include<utility>
using namespace std;
pair<int, int> firstAndLastPosition(vector<int>& arr, int k)
{
    // Write your code here
    int n= arr.size();
    int first = -1, last = -1;
    //Binary search for the first operation
    int low=0, high=n-1;
    while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k)
        {
            first=mid;
            high=mid-1;

        }
         else if (arr[mid] > k) 
        {
            high = mid - 1;
        }
        else
        {
            low = mid+1;

        }
    }
    //Binary search for the last occurence
    low=0, high=n-1;
     while(low<=high)
    {
        int mid=(low+high)/2;
        if(arr[mid]==k)
        {
            last=mid;
            low=mid+1;


        }
         else if (arr[mid] > k) 
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;

        }
    }
    return {first,last};

}
int main() {
    int n, k;
    cin >> n >> k; 
    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }

    pair<int, int> result = firstAndLastPosition(arr, k);
    cout << result.first << " " << result.second << endl; 

    return 0;
}

