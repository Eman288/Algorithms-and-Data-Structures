# Selection Sort

## Description
Selection Sort is a simple sorting algorithm that repeatedly finds the smallest element from the unsorted part of the array and places it at the beginning.

## How It Works

1. Start from the first element.
2. Assume it is the minimum element.
3. Search the remaining unsorted elements for a smaller value.
4. Update the minimum index whenever a smaller element is found.
5. Swap the minimum element with the first element of the unsorted part.
6. Repeat until the array is sorted.

## Example

**Initial Array:**
```text
12 2 34 11 19 4 5
```

**After Pass 1:**
```text
2 12 34 11 19 4 5
```

**After Pass 2:**
```text
2 4 34 11 19 12 5
```

**Final Sorted Array:**
```text
2 4 5 11 12 19 34
```

## Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n²) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

**Space Complexity:** O(1)

## Important Notes
- Uses the minimum element selection approach.
- Performs at most n-1 swaps.
- In-place sorting algorithm.
- Not a stable sorting algorithm.
- Does not require the original array to be sorted.