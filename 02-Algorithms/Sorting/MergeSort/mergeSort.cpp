#include <iostream>
using namespace std;

/*
arr => the array we will merge
l => the left index
mid => the middle index
r => the right index

// Merge two sorted parts
*/
void Merge(int arr[], int l, int mid, int r)
{
    int i = l;
    int j = mid + 1;
    int k = l;
    
    int temp[r - l + 1];
    
    while (i <= mid && j <= r)
    {
        if (arr[i] <= arr[j])
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

/*
arr => the array we want to sort
l => the index of the start of the range
r => the indeex of the end of the range

// Divide the array recursively
*/
void MergeSort(int arr[], int l, int r)
{
    // if the left index reached the right or became larger, return
    if (l >= r)
        return;

    // calculate the middle index
    int mid = (l + r) / 2;
    
    // call the function again on the left and right array sides
    MergeSort(arr, l, mid);
    MergeSort(arr, mid + 1, r);
    
    // at the end merge each two parts
    Merge(arr, l, mid, r);
}


int main() {
   
    // set the array to test
    int arr[] = {38, 27, 43, 10, 5, 15};
    // calculate the size of the array
    int n = sizeof(arr) / sizeof(arr[0]);

    // call the function
    MergeSort(arr, 0, n - 1);

    // print the array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}