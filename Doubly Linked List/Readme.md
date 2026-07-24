# Doubly Linked List

## Introduction

A **Doubly Linked List (DLL)** is a linear dynamic data structure in which each node contains:

1. Data
2. A pointer to the previous node (`prev`)
3. A pointer to the next node (`next`)

Unlike a Singly Linked List, a Doubly Linked List allows traversal in both forward and backward directions.

---

## Node Structure

```c
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
```

Each node stores data along with links to both its previous and next nodes.

---

## Visualization

```text
NULL <- [10] <-> [20] <-> [30] <-> [40] -> NULL
```

### Node Representation

```text
+--------+--------+--------+
| Prev   | Data   | Next   |
+--------+--------+--------+
```

Example:

```text
NULL <- [10] <-> [20] <-> [30] -> NULL
```

* `10` points forward to `20`
* `20` points backward to `10` and forward to `30`
* `30` points backward to `20`

---

## Why Use a Doubly Linked List?

A Singly Linked List only allows forward traversal.

```text
10 -> 20 -> 30 -> NULL
```

A Doubly Linked List allows movement in both directions.

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

This makes insertion and deletion operations more efficient in many cases.

---

## Key Characteristics

* Dynamic size.
* Non-contiguous memory allocation.
* Supports forward and backward traversal.
* Efficient insertion and deletion.
* Requires extra memory for the `prev` pointer.

---

## Basic Operations

### 1. Traversal

Visit each node in the list.

Forward traversal:

```text
10 -> 20 -> 30 -> 40
```

Backward traversal:

```text
40 -> 30 -> 20 -> 10
```

---

### 2. Insertion at Beginning

Before:

```text
NULL <- 20 <-> 30 -> NULL
```

Insert `10`

After:

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

Steps:

1. Create a new node.
2. Set its next pointer to the current head.
3. Update the current head's prev pointer.
4. Make the new node the head.

---

### 3. Insertion at End

Before:

```text
NULL <- 10 <-> 20 -> NULL
```

Insert `30`

After:

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

Steps:

1. Traverse to the last node.
2. Connect the last node to the new node.
3. Set the new node's prev pointer.

---

### 4. Insertion After a Node

Before:

```text
NULL <- 10 <-> 30 -> NULL
```

Insert `20` after `10`

After:

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

---

### 5. Deletion at Beginning

Before:

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

Delete `10`

After:

```text
NULL <- 20 <-> 30 -> NULL
```

---

### 6. Deletion at End

Before:

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

Delete `30`

After:

```text
NULL <- 10 <-> 20 -> NULL
```

---

### 7. Deletion of a Specific Node

Before:

```text
NULL <- 10 <-> 20 <-> 30 -> NULL
```

Delete `20`

After:

```text
NULL <- 10 <-> 30 -> NULL
```

Pointers are adjusted to bypass the deleted node.

---

### 8. Reverse Traversal

One of the major advantages of a Doubly Linked List.

```text
Forward:
10 -> 20 -> 30 -> 40

Backward:
40 -> 30 -> 20 -> 10
```

---

## Time Complexity

| Operation              | Time Complexity |
| ---------------------- | --------------- |
| Traversal              | O(n)            |
| Search                 | O(n)            |
| Insertion at Beginning | O(1)            |
| Insertion at End*      | O(n)            |
| Deletion at Beginning  | O(1)            |
| Deletion at End*       | O(n)            |
| Delete Given Node      | O(1)            |
| Reverse Traversal      | O(n)            |

*Can become **O(1)** if a tail pointer is maintained.

---

## Space Complexity

```text
O(n)
```

Each node stores:

* Data
* Previous Pointer
* Next Pointer

Additional memory is required compared to a Singly Linked List.

---

## Advantages

* Bidirectional traversal.
* Easier deletion operations.
* Efficient insertion before and after a node.
* Useful for navigation systems.
* Can be traversed in reverse without reversing the list.

---

## Disadvantages

* Extra memory required for the previous pointer.
* More complex implementation.
* Additional pointer updates during insertion and deletion.

---

## Applications

### Browser Navigation

```text
Previous Page <-> Current Page <-> Next Page
```

Allows moving backward and forward between pages.

---

### Undo and Redo Operations

Used in:

* Text editors
* IDEs
* Graphic design software

Example:

```text
Action1 <-> Action2 <-> Action3
```

---

### Music Players

```text
Song1 <-> Song2 <-> Song3
```

Supports both next and previous song navigation.

---

### Image Galleries

```text
Image1 <-> Image2 <-> Image3
```

Allows viewing images in both directions.

---

### LRU Cache

Many cache implementations internally use Doubly Linked Lists for efficient insertion and deletion.

---

## Comparison with Singly Linked List

| Feature            | Singly Linked List | Doubly Linked List |
| ------------------ | ------------------ | ------------------ |
| Next Pointer       | Yes                | Yes                |
| Previous Pointer   | No                 | Yes                |
| Forward Traversal  | Yes                | Yes                |
| Backward Traversal | No                 | Yes                |
| Memory Usage       | Less               | More               |
| Deletion           | Harder             | Easier             |
| Implementation     | Simpler            | More Complex       |

---

## Common Interview Questions

1. What is a Doubly Linked List?
2. How is it different from a Singly Linked List?
3. Why does a Doubly Linked List require more memory?
4. How do you insert a node at the beginning?
5. How do you delete a node efficiently?
6. What are the applications of Doubly Linked Lists?
7. How can insertion at the end be made O(1)?
8. What is the role of the `prev` pointer?
9. How do you reverse traverse a Doubly Linked List?
10. When should a Doubly Linked List be preferred over a Singly Linked List?

---

## Implementations

### Available Languages

* C
* C++
* Java
* Python

---

## Key Takeaway

A Doubly Linked List is an extension of a Singly Linked List that allows traversal in both directions using `prev` and `next` pointers. Although it requires extra memory, it provides greater flexibility and more efficient insertion and deletion operations, making it useful in many real-world applications such as browser navigation, undo-redo systems, and cache implementations.
