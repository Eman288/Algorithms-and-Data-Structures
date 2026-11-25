#include <iostream>
using namespace std;

/*
arr => the sorted array we will search in
n => the size of the array
target => the number we are searching for

Returns the index of the target if found, otherwise returns -1.
*/

int BinarySearch(int arr[], int n ,int target)
{
    // set the search range
    int low = 0;
    int high = n - 1;
    
    // continue while the search range is still valid
    while (low <= high)
    {
        // get the mid and its value
        int mid = low + (high - low) / 2;
        int val = arr[mid];
        
        // change the range depending on which half we need
        if (val < target) low = mid + 1;
        else if (val > target) high = mid - 1;
        else return mid; // target found
    }
    return -1; // target not found
}

// test the code
int main() {
    // create an array to test with
   int arr[] = {12, 14, 34, 54, 55, 65, 70, 100, 120};
   // get the array size
   int n = sizeof(arr) / sizeof(arr[0]);
   // call the function and check the result
   int target;
   cin >> target;
   int pos = BinarySearch(arr, n, target);
   if (pos == -1)
   {
       cout << "Target not found";
   }
   else
   {
       cout << "Target is Found at " << pos;
   }
   
    return 0;
}