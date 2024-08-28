#include <iostream>  
using namespace std;


void PrintArr(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << "\t";
    }
    cout << endl;
}


void swap(int arr[], int i, int j) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}


int partition(int arr[], int low, int high) {
    int pivot = arr[high];  
    int i = low - 1;  

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] <= pivot) {  
            i++;  
            swap(arr, i, j);  
        }
    }
    swap(arr, i + 1, high);  
    return (i + 1);  
}


void QuickSort(int arr[], int low, int high, int v_flag, int n) {
    if (low < high) {
        int pi = partition(arr, low, high); 

        QuickSort(arr, low, pi - 1, v_flag, n);  
        QuickSort(arr, pi + 1, high, v_flag, n);  
    }
    
    if (v_flag == 1) {  
        PrintArr(arr, n);
    }
}

int main() {
    int arr[] = {10, 7, 8, 9, 1, 5};  
    int n = sizeof(arr) / sizeof(arr[0]);  

    cout << "Unsorted array: " << endl;
    PrintArr(arr, n);  

    QuickSort(arr, 0, n - 1, 1, n);  

    cout << "Sorted array: " << endl;
    PrintArr(arr, n);  

    return 0;
}
