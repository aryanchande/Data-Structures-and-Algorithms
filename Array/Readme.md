# Array

## Introduction

An **Array** is a linear data structure that stores a collection of elements of the same data type in **contiguous memory locations**. Arrays are one of the most fundamental data structures and serve as the building blocks for many advanced data structures such as Stacks, Queues, Heaps, Hash Tables, and Matrices.

Each element in an array can be accessed directly using its index.

---

## Why Use Arrays?

Arrays provide:

* Fast access to elements using indices.
* Efficient storage of multiple values of the same type.
* Easy traversal and manipulation.
* Foundation for many advanced data structures and algorithms.

---

## Array Representation

Consider the array:

```text
arr = [10, 20, 30, 40, 50]
```

Visualization:

```text
Index:   0    1    2    3    4
       +----+----+----+----+----+
Value: | 10 | 20 | 30 | 40 | 50 |
       +----+----+----+----+----+
```

---

## Memory Representation

Arrays occupy contiguous memory locations.

```text
Address    Value
-------    -----
1000       10
1004       20
1008       30
1012       40
1016       50
```

For an integer array, each element typically occupies 4 bytes.

---

## Declaration

### C

```c
int arr[5];
```

### C++

```cpp
int arr[5];
```

### Java

```java
int[] arr = new int[5];
```

### Python

```python
arr = [10, 20, 30, 40, 50]
```

---

## Initialization

### During Declaration

```c
int arr[5] = {10, 20, 30, 40, 50};
```

### Partial Initialization

```c
int arr[5] = {10, 20};
```

Result:

```text
[10, 20, 0, 0, 0]
```

---

## Types of Arrays

### 1. One-Dimensional Array

```text
[10, 20, 30, 40]
```

---

### 2. Two-Dimensional Array

Used to represent matrices.

```text
1  2  3
4  5  6
7  8  9
```

Declaration:

```c
int matrix[3][3];
```

---

### 3. Multi-Dimensional Array

Arrays with more than two dimensions.

```c
int arr[2][3][4];
```

---

## Basic Operations

### 1. Traversal

Visiting every element in the array.

```text
Array:
[10, 20, 30, 40]
```

Output:

```text
10 20 30 40
```

**Time Complexity:** O(n)

---

### 2. Accessing Elements

Access elements using indices.

```text
Array:
[10, 20, 30, 40]
```

```text
arr[2] = 30
```

**Time Complexity:** O(1)

---

### 3. Insertion

Insert an element at a specific position.

Before:

```text
[10, 20, 40, 50]
```

Insert 30 at index 2:

```text
[10, 20, 30, 40, 50]
```

Elements after the insertion point must be shifted.

**Time Complexity:** O(n)

---

### 4. Deletion

Delete an element from a specific position.

Before:

```text
[10, 20, 30, 40, 50]
```

Delete element at index 2:

```text
[10, 20, 40, 50]
```

Remaining elements are shifted left.

**Time Complexity:** O(n)

---

### 5. Searching

#### Linear Search

Checks elements one by one.

```text
[10, 20, 30, 40, 50]
```

Search for 40:

```text
Found at Index 3
```

**Time Complexity:** O(n)

---

#### Binary Search

Applicable only on sorted arrays.

```text
[10, 20, 30, 40, 50]
```

**Time Complexity:** O(log n)

---

### 6. Updating

Modify an existing element.

Before:

```text
[10, 20, 30]
```

Update index 1 to 25:

```text
[10, 25, 30]
```

**Time Complexity:** O(1)

---

## Advantages

* Fast random access.
* Easy implementation.
* Cache-friendly due to contiguous memory.
* Efficient traversal.
* Suitable for mathematical computations.

---

## Disadvantages

* Fixed size in many languages.
* Insertion and deletion can be expensive.
* Memory wastage if size is overestimated.
* Requires contiguous memory allocation.

---

## Time Complexity Analysis

| Operation     | Complexity |
| ------------- | ---------- |
| Access        | O(1)       |
| Update        | O(1)       |
| Traversal     | O(n)       |
| Linear Search | O(n)       |
| Binary Search | O(log n)   |
| Insertion     | O(n)       |
| Deletion      | O(n)       |

---

## Space Complexity

```text
O(n)
```

Where **n** is the number of elements in the array.

---

## Real-World Applications

### Storing Student Records

```text
Roll Numbers:
[101, 102, 103, 104]
```

---

### Storing Daily Temperatures

```text
[31, 33, 29, 35, 32]
```

---

### Image Processing

Images are stored as multidimensional arrays.

```text
Pixel[row][column]
```

---

### Matrix Operations

```text
A = [1 2]
    [3 4]
```

Used in:

* Computer Graphics
* Scientific Computing
* Machine Learning

---

### Databases

Arrays are often used internally for indexing and storage structures.

---

## Arrays vs Linked Lists

| Feature           | Array      | Linked List       |
| ----------------- | ---------- | ----------------- |
| Memory Allocation | Contiguous | Non-Contiguous    |
| Access by Index   | O(1)       | O(n)              |
| Insertion         | O(n)       | O(1) at beginning |
| Deletion          | O(n)       | O(1) at beginning |
| Memory Usage      | Less       | More              |
| Cache Performance | Better     | Poorer            |

---

## Common Array Algorithms

* Linear Search
* Binary Search
* Bubble Sort
* Selection Sort
* Insertion Sort
* Merge Sort
* Quick Sort
* Kadane's Algorithm
* Prefix Sum
* Sliding Window
* Two Pointer Technique

---

## Common Interview Questions

1. What is an Array?
2. Why are arrays stored in contiguous memory?
3. What is the difference between an Array and a Linked List?
4. What is the time complexity of accessing an element?
5. Why is insertion expensive in arrays?
6. What is Binary Search?
7. What are multidimensional arrays?
8. What are dynamic arrays?
9. What are the advantages of arrays?
10. When should arrays be preferred over linked lists?

---

## Implementations

### Available Languages

* C
* C++
* Java
* Python

### Repository Structure

```text
Arrays/
│
├── README.md
│
├── C/
│   ├── array_basics.c
│   ├── insertion.c
│   ├── deletion.c
│   ├── traversal.c
│   └── searching.c
│
├── CPP/
│   ├── array_basics.cpp
│   ├── vector_basics.cpp
│   └── searching.cpp
│
├── Java/
│   ├── ArrayBasics.java
│   └── Searching.java
│
└── Python/
    ├── array_basics.py
    └── searching.py
```

---

## Key Takeaway

An Array is one of the most important and widely used data structures. It provides efficient random access, simple implementation, and excellent performance for many applications. Understanding arrays thoroughly is essential because many advanced data structures and algorithms are built upon array concepts.
