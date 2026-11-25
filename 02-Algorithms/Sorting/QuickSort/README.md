# Quick Sort

## Description
Quick Sort is a sorting algorithm based on the Divide and Conquer technique.

It selects a pivot element, partitions the array around it, and recursively sorts the two resulting parts.

## How It Works

1. Choose the last element as the pivot.
2. Compare each element with the pivot.
3. Move elements smaller than the pivot to the left.
4. Place the pivot in its correct position.
5. Recursively sort the left and right partitions.

## Example

**Initial Array:**
```text
8 2 4 7 1 3 9 6 5
```

**After First Partition:**
```text
2 4 1 3 5 7 9 6 8
```

**Final Sorted Array:**
```text
1 2 3 4 5 6 7 8 9
```

## Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n²) |

**Space Complexity:**
- Average: O(log n)
- Worst: O(n)

## Important Notes
- Uses the Divide and Conquer approach.
- Uses the last element as the pivot.
- Uses the Lomuto Partition Scheme.
- Sorting is performed in-place.
- Quick Sort is not a stable sorting algorithm.