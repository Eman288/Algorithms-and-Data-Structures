# Binary Search

## Description
Binary Search is an efficient searching algorithm used to find a target element in a **sorted array**.

It repeatedly divides the search range into two halves until the target is found or the search range becomes empty.

## How It Works
1. Initialize `low` to the first index and `high` to the last index.
2. Calculate the middle index.
3. Compare the middle element with the target:
   - If equal, return the middle index.
   - If the middle element is smaller, search the right half.
   - If the middle element is greater, search the left half.
4. Repeat until the target is found or the range is empty.

## Example

**Input:**
```text
55
```

**Output:**
```text
Target is found at index: 4
```

## Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(1) |
| Average Case | O(log n) |
| Worst Case | O(log n) |

**Space Complexity:** O(1)

## Important Note
The array must be sorted before applying Binary Search.