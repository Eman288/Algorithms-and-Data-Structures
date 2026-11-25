# Bubble Sort

## Description
Bubble Sort is a simple sorting algorithm that repeatedly compares adjacent elements and swaps them if they are in the wrong order.

It continues making passes through the array until all elements are sorted.

## How It Works

1. Start from the first element.
2. Compare each element with the next one.
3. Swap them if the first element is greater.
4. After each pass, the largest unsorted element reaches its correct position.
5. Repeat until the array is sorted.

## Example

**Initial Array:**
```text
12 2 34 11 19 4 5
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
- Uses adjacent comparisons and swaps.
- In-place sorting algorithm.
- Stable sorting algorithm.
- Each pass places the largest remaining element in its correct position.