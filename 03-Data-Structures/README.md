# Stack Data Structure (C++)

This folder contains two implementations of the **Stack Data Structure** using C++.

A Stack is a linear data structure that follows the **LIFO (Last In, First Out)** principle, which means the last element added is the first one to be removed.

## Files

### 1. `stack_Normal.cpp`
A basic Stack implementation that works with **int data type only**.

### 2. `stack_anyType.cpp`
A generic Stack implementation using **Templates**, which allows the Stack to work with different data types such as `int`, `float`, `double`, and `string`.

## Implemented Operations

Both implementations include the following operations:

| Operation | Description |
|---|---|
| `Push()` | Adds a new element to the top of the Stack. |
| `Pop()` | Removes the top element without returning it. |
| `PopAndReturn()` | Removes and returns the top element. |
| `Peek()` | Returns the top element without removing it. |
| `isEmpty()` | Checks if the Stack is empty. |
| `isFull()` | Checks if the Stack is full. |
| `Size()` | Returns the number of elements in the Stack. |
| `Display()` | Displays all elements from top to bottom. |

## Stack Example

If we push the following elements:

```cpp
s.Push(10);
s.Push(20);
s.Push(30);
```

The Stack will look like this:

```text
Top -> 30
       20
       10
```

When we call `Pop()`, the element `30` will be removed first.

## Notes

- Both implementations use a fixed-size array.
- The maximum Stack size is defined by `MAX_SIZE`.
- The default maximum size is `3`.
- The Stack follows the LIFO principle.
