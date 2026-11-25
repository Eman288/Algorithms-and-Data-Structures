
#include <iostream>
using namespace std;

/*
arr => the array we want to sort
n => the size of the array

Sort the array in ascending order using Selection Sort.
*/
void SelectionSort(int arr[], int n)
{
    int minIndex, temp;

    // Each pass selects the smallest element from the unsorted part
    for (int i = 0; i < n - 1; i++)
    {
        // Assume the first element is the minimum
        minIndex = i;

        // Search for the actual minimum element
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        // Swap only if a smaller element was found
        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
        }
    }
}

int main()
{
    // Create an array for testing
    int arr[] = {12, 2, 34, 11, 19, 4, 5};

    int n = sizeof(arr) / sizeof(arr[0]);

    // Sort the array
    SelectionSort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
