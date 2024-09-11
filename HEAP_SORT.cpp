#include<iostream>
#include<vector>
using namespace std;
void PrintArr(vector<int>& arr)
{
	int i;
    for (size_t i = 0; i < arr.size(); ++i)
    cout<< arr[i] << " ";
	cout<<endl;
}
void heapify(vector<int> &arr,int n,int i)
{
	int largest = i;
	int left = 2*i+1;
	int right = 2*i+2;
	if(left < n && arr[left]>arr[largest])
	   largest = left;
	if(right < n && arr[left]>arr[largest])
	   largest = right;
	if(largest != i)
	{
	
	   swap(arr[i],arr[largest]);
	heapify(arr,n,largest);
}
	
}
void HeapSort(vector<int>& arr,int v_flag)
{
	int n = arr.size();
	int i;
	for(i=n/2-1;i>=0;i--)
	heapify(arr,n,i);
	for(i=n-1;i>0;i--)
	{
	
	swap(arr[0],arr[i]);
	heapify(arr,i,0);
	if (v_flag == 1) {  
            PrintArr(arr);
        }
    }
}

int main() {
    int n,v_flag;

    cout << "Enter the number of elements: ";
    cin >> n; 

    vector<int> arr(n); 

    cout << "Enter the elements:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i]; 
    }

    cout << "Original array: ";
    PrintArr(arr);

    HeapSort(arr,v_flag);

    cout << "Sorted array: ";
    PrintArr(arr);

    return 0;
}






