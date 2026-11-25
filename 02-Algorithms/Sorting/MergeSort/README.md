# Merge Sort

## Description
Merge Sort is a sorting algorithm based on the Divide and Conquer technique.

It divides the array into smaller parts until each part contains only one element, then merges these parts in sorted order.

## How It Works

### 1. Divide
- Divide the array into two halves.
- Continue dividing each half recursively.
- Stop when each part contains one element.

### 2. Merge
- Compare the first elements of the two sorted parts.
- Move the smaller element into a temporary array.
- Continue comparing until one part is empty.
- Copy the remaining elements.
- Copy the temporary array back into the original array.

## Example

**Initial Array:**
```text
38 27 43 10 5 15
```

**Divide:**
```text
[38, 27, 43]    [10, 5, 15]

[38] [27, 43]   [10] [5, 15]

[38] [27] [43]  [10] [5] [15]
```

**Merge:**
```text
[27, 38]        [5, 10]

[27, 38, 43]    [5, 10, 15]
```

**Final Merge:**
```text
[5, 10, 15, 27, 38, 43]
```

## Complexity Analysis

| Case | Time Complexity |
|---|---|
| Best Case | O(n log n) |
| Average Case | O(n log n) |
| Worst Case | O(n log n) |

**Space Complexity:** O(n) auxiliary space.

## Important Notes
- The original array does not need to be sorted.
- Merge Sort uses recursion.
- A temporary array is used during merging.
- Merge Sort is a stable sorting algorithm when equal elements from the left part are selected first.