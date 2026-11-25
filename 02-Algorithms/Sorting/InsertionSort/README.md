# Insertion Sort

## Description
Insertion Sort is a simple sorting algorithm that builds the sorted array one element at a time.

It takes each element and inserts it into its correct position among the previously sorted elements.

## How It Works
1. Start from the second element.
2. Store the current element in a variable called `key`.
3. Compare the key with the elements before it.
4. Shift elements greater than the key one position to the right.
5. Insert the key in its correct position.
6. Repeat until all elements are sorted.

## Example

**Input:**
```text
12 2 34 11 19 4 5
```

**Output:**
```text
2 4 5 11 12 19 34
```

## Time Complexity

| Case | Complexity |
|---|---|
| Best Case | O(n) |
| Average Case | O(n²) |
| Worst Case | O(n²) |

## Space Complexity
- O(1) auxiliary space.

## Properties
- In-place sorting algorithm.
- Stable sorting algorithm.
- Efficient for small or nearly sorted arrays.
