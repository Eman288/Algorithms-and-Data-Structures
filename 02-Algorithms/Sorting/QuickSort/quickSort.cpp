#include <iostream>
using namespace std;

/*
arr => the array we want to sort
l => the starting index
r => the ending index

Quick Sort using the last element as the pivot.
*/
void QuickSort(int arr[], int l, int r)
{
    // Base case: the part contains one or zero elements
    if (r <= l) return;

    // choose the last element as the pivot
    int pivot = arr[r];

    // i points to the last element smaller than the pivot
    int i = l - 1;
    // j scans the array from left to right
    int j = l;

    while (j < r)
    {
        if (arr[j] < pivot)
        {
            i++;
            // swap the current element with arr[i]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
        
        j++;
    }
    // swap the pivot(where j stands) with the value of i + 1
    // swap
    int temp = arr[i + 1];
    arr[i + 1] = arr[j];
    arr[j] = temp;
    
    // divide and recall the function
    // the left part
    QuickSort(arr, l, i);
    //the right part
    QuickSort(arr, i + 2, r);
}

int main() {
    int arr[] = {8, 2, 4, 7 , 1, 3, 9 , 6, 5};
    QuickSort(arr,0, 8);
    for (int i = 0; i < 9; i++)
    {
        cout << arr[i] << " ";
    }
   
    return 0;
}