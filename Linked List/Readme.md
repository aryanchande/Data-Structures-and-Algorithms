# Linked List

## Introduction

A **Linked List** is a linear dynamic data structure where elements are stored in nodes. Unlike arrays, linked list elements are not stored in contiguous memory locations. Each node contains data and a pointer (or link) to the next node in the sequence.

Linked Lists are widely used when the size of the data structure changes frequently and efficient insertion/deletion operations are required.

---

## Node Structure

### C Representation

```c
struct node
{
    int data;
    struct node *next;
};
```

Each node consists of:

* **Data**: Stores the value.
* **Next Pointer**: Stores the address of the next node.

---

## Visualization

```text
Head
 |
 v

+------+------+
| 10   |  o---|----+
+------+------+
                |
                v
         +------+------+
         | 20   |  o---|----+
         +------+------+
                         |
                         v
                  +------+------+
                  | 30   | NULL |
                  +------+------+
```

---

## Why Use Linked Lists?

Arrays have a fixed size and require contiguous memory allocation.

```text
Array:
[10][20][30][40]
```

Linked Lists provide:

* Dynamic size
* Efficient insertion and deletion
* Memory allocation as needed

---

## Characteristics

* Dynamic memory allocation.
* Non-contiguous memory storage.
* Sequential access.
* Efficient insertion and deletion.
* Additional memory required for pointers.

---

## Types of Linked Lists

### 1. Singly Linked List

Each node points to the next node only.

```text
10 -> 20 -> 30 -> NULL
```

---

### 2. Doubly Linked List

Each node contains pointers to both previous and next nodes.

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

---

### 3. Circular Linked List

The last node points back to the first node.

```text
10 -> 20 -> 30
^            |
|____________|
```

---

### 4. Circular Doubly Linked List

Each node has previous and next pointers, and the last node connects back to the first node.

```text
10 <-> 20 <-> 30
^              |
|______________|
```

---

## Basic Operations

### 1. Traversal

Visit every node in the list.

```text
10 -> 20 -> 30 -> NULL
```

Traversal Output:

```text
10 20 30
```

**Time Complexity:** O(n)

---

### 2. Insertion at Beginning

Before:

```text
Head
 |
 v

10 -> 20 -> 30 -> NULL
```

Insert 5:

```text
Head
 |
 v

5 -> 10 -> 20 -> 30 -> NULL
```

**Time Complexity:** O(1)

---

### 3. Insertion at End

Before:

```text
10 -> 20 -> NULL
```

Insert 30:

```text
10 -> 20 -> 30 -> NULL
```

**Time Complexity:** O(n)

---

### 4. Insertion at Specific Position

Before:

```text
10 -> 30 -> NULL
```

Insert 20 at position 2:

```text
10 -> 20 -> 30 -> NULL
```

**Time Complexity:** O(n)

---

### 5. Deletion at Beginning

Before:

```text
10 -> 20 -> 30 -> NULL
```

Delete 10:

```text
20 -> 30 -> NULL
```

**Time Complexity:** O(1)

---

### 6. Deletion at End

Before:

```text
10 -> 20 -> 30 -> NULL
```

Delete 30:

```text
10 -> 20 -> NULL
```

**Time Complexity:** O(n)

---

### 7. Deletion by Value

Before:

```text
10 -> 20 -> 30 -> NULL
```

Delete 20:

```text
10 -> 30 -> NULL
```

**Time Complexity:** O(n)

---

### 8. Searching

Find a value in the list.

Example:

```text
10 -> 20 -> 30 -> NULL
```

Search for 20:

```text
Found at Position 2
```

**Time Complexity:** O(n)

---

### 9. Reversal

Before:

```text
10 -> 20 -> 30 -> NULL
```

After:

```text
30 -> 20 -> 10 -> NULL
```

**Time Complexity:** O(n)

---

## Time Complexity Analysis

| Operation           | Complexity |
| ------------------- | ---------- |
| Access by Index     | O(n)       |
| Search              | O(n)       |
| Traversal           | O(n)       |
| Insert at Beginning | O(1)       |
| Insert at End       | O(n)       |
| Insert at Position  | O(n)       |
| Delete at Beginning | O(1)       |
| Delete at End       | O(n)       |
| Delete by Value     | O(n)       |
| Reverse             | O(n)       |

---

## Space Complexity

```text
O(n)
```

Where **n** is the number of nodes in the linked list.

---

## Advantages

* Dynamic size.
* Efficient insertion and deletion.
* Memory allocated as needed.
* No need for contiguous memory.
* Useful for implementing other data structures.

---

## Disadvantages

* Extra memory required for pointers.
* No direct indexing like arrays.
* Traversal is slower compared to arrays.
* Reverse traversal is not possible in a Singly Linked List.

---

## Applications

### Stack Implementation

```text
Top
 |
 v

30 -> 20 -> 10 -> NULL
```

---

### Queue Implementation

```text
Front -> 10 -> 20 -> 30 -> NULL <- Rear
```

---

### Graph Representation

Adjacency Lists are often implemented using linked lists.

---

### Dynamic Memory Management

Used in operating systems and memory allocators.

---

### Browser History

Often implemented using Doubly Linked Lists.

---

### Music Playlists

```text
Song1 -> Song2 -> Song3
```

Supports dynamic insertion and deletion.

---

## Comparison with Arrays

| Feature           | Array      | Linked List       |
| ----------------- | ---------- | ----------------- |
| Memory Allocation | Contiguous | Non-Contiguous    |
| Size              | Fixed      | Dynamic           |
| Random Access     | O(1)       | O(n)              |
| Insertion         | O(n)       | O(1) at beginning |
| Deletion          | O(n)       | O(1) at beginning |
| Memory Usage      | Less       | More              |

---

## Common Interview Questions

1. What is a Linked List?
2. How is a Linked List different from an Array?
3. What are the types of Linked Lists?
4. Why is insertion efficient in a Linked List?
5. What is the time complexity of searching?
6. How do you reverse a Linked List?
7. What is a Circular Linked List?
8. What is a Doubly Linked List?
9. What are the advantages of Linked Lists?
10. When should you use a Linked List instead of an Array?

---

## Implementations

### Available Languages

* C
* C++
* Java
* Python

---

## Key Takeaway

A Linked List is a dynamic linear data structure that stores elements in nodes connected through pointers. It provides efficient insertion and deletion operations, making it a fundamental building block for advanced data structures such as Stacks, Queues, Trees, Graphs, and Hash Tables.
