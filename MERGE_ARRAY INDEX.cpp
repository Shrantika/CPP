#include<iostream>
#include<vector>
using namespace std;
class Solution
{
	public:
		 vector<vector<int> > mergeArrays(const vector<vector<int> >& nums1,const  vector<vector<int>  >& nums2)
		 {
		 	vector<vector<int>  > result;
        int i = 0, j = 0;
        
        while (i < nums1.size() && j < nums2.size())
	    {
            if (nums1[i][0] == nums2[j][0]) 
			{  
                result.push_back({nums1[i][0], nums1[i][1] + nums2[j][1]});
                i++, j++;
            } else if (nums1[i][0] < nums2[j][0])
			 {  
                result.push_back(nums1[i]);
                i++;
            } else 
			{  
                result.push_back(nums2[j]);
                j++;
            }
        }

        while (i < nums1.size()) result.push_back(nums1[i++]);
        while (j < nums2.size()) result.push_back(nums2[j++]);

        return result;
    }
};
int main()
{
	Solution sol;
	int n1,n2;
	cout<<"Enter the elements in the first array : ";
	cin>>n1;
	vector<vector<int> > nums1(n1, vector<int>(2));
	cout << "Enter elements (id value) for nums1:\n";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i][0] >> nums1[i][1];
    }

	cout<<"Enter the elements in the first array : ";
	cin>>n2;
	vector<vector<int> > nums2(n2, vector<int>(2));
    cout << "Enter elements (id value) for nums2:\n";
    for (int i = 0; i < n2; i++) 
	{
        cin >> nums2[i][0] >> nums2[i][1];
    }
	vector<vector<int> > mergedArray = sol.mergeArrays(nums1, nums2);

     cout << "Merged Array: [";
    for (int i = 0; i < mergedArray.size(); i++) {
        cout << "[" << mergedArray[i][0] << "," << mergedArray[i][1] << "]";
        if (i != mergedArray.size() - 1) cout << ",";
    }
    cout << "]" << endl;

    return 0;
}

