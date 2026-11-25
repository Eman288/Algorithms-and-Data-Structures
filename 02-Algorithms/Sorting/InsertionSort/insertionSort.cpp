
#include <iostream>
using namespace std;

/*
arr => the array we will sort
n => the size of the array
*/
void InsertionSort(int arr[], int n)
{
    int key, j;

    for (int i = 1; i < n; i++)
    {
        // Store the current element
        key = arr[i];
        j = i - 1;

        // Move elements greater than key one position ahead
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        // Insert the key in its correct position
        arr[j + 1] = key;
    }
}

int main()
{
    int arr[] = {12, 2, 34, 11, 19, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    InsertionSort(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
