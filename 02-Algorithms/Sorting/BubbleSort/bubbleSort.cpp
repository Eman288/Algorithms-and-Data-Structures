
#include <iostream>
using namespace std;

/*
arr => the array we want to sort
n => the size of the array

Sort the array in ascending order using Bubble Sort.
*/
void BubbleSort(int arr[], int n)
{
    int temp;

    // Each pass moves the largest remaining element to its correct position
    for (int i = 0; i < n - 1; i++)
    {
        // Skip the elements that are already in their correct positions
        for (int j = 0; j < n - 1 - i; j++)
        {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1])
            {
                // Swap the elements if they are in the wrong order
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main()
{
    // Create an array for testing
    int arr[] = {12, 2, 34, 11, 19, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    BubbleSort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
