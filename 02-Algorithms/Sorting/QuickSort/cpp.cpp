#include <iostream>
using namespace std;

void QuickSort(int arr[], int l, int r)
{
    if (r <= l) return;
    int pivot = arr[r];
    int i = l - 1;
    int j = l;
    while (j < r)
    {
        if (arr[j] < pivot)
        {
            i++;
        
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