#include <iostream>
using namespace std;


// Merge two sorted parts
void Merge(int arr[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    
    int temp[r - l + 1];
    
    while (i <= mid && j <= r)
    {
        if (arr[i] < arr[j])
        {
            temp[k] = arr[i];
            i++;
        }
        else
        {
            temp[k] = arr[j];
            j++;
        }
        k++;
    }
    
    // get the rest of the elements from the first array
    while (i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }
    // get the rest of the elements from the second array
    while (j <= r)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }
    
    // copy the elements from the temp to the main array
    for (int x = l; x <= r; x++)
    {
        arr[x] = temp[x];
    }
    
}

// Divide the array recursively
void MergeSort(int arr[], int l, int r)
{
    if (l >= r)
        return;
    int mid = (l + r) / 2;
    
    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, r);
    
    Merge(arr, l, mid, r);
}


int main() {
   
    int arr[] = {38, 27, 43, 10, 5, 15};
    int n = 6;

    MergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}