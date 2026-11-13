#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n ,int target)
{
    int low = 0;
    int high = n - 1;
    
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        int val = arr[mid];
        
        if (val < target) low = mid + 1;
        else if (val > target) high = mid - 1;
        else return 2; // target found
    }
    return -1; // target not found
}

int main() {
   int arr[] = {12, 14, 34, 54, 55, 65, 70, 100, 120};
   int pos = BinarySearch(arr, 9, 14);
   if (pos == -1)
   {
       cout << "Target not found";
   }
   else
   {
       cout << "Target is Found at " + pos;
   }
   
    return 0;
}