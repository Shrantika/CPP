#include<bits/stdc++.h>
using namespace std;
class Solution 
{
  public:
    void pushZerosToEnd(vector<int>& arr) {
        
        int nonZeroindex = 0;
        for (int i=0;i<arr.size();i++)
        {
            if(arr[i] != 0)
            {
                int t=arr[nonZeroindex];
                arr[nonZeroindex]=arr[i];
                arr[i]=t;
                nonZeroindex++;
            }
        }
          
    }
};
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    vector<int> arr(n);
    
    // Ask the user to enter the elements of the array
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }
    
    // Create a Solution object
    Solution solution;
    
    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Call the function to push zeros to the end
    solution.pushZerosToEnd(arr);
    
    // Print the modified array
    cout << "Array after pushing zeros to the end: ";
    for (int i = 0; i < arr.size(); ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Wait for user input before closing (optional)
    system("pause"); // For Windows. Use `cin.get()` for cross-platform.
    
    return 0;
}
