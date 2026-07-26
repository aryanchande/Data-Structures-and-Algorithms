# Stack

## Introduction

A **Stack** is a linear data structure that follows the **LIFO (Last In, First Out)** principle. This means the last element inserted into the stack is the first element to be removed.

A stack can be visualized as a stack of plates where you can only add or remove plates from the top.

---

## Visualization

```text
        Top
         |
         v
      +-----+
      | 30  |
      +-----+
      | 20  |
      +-----+
      | 10  |
      +-----+
```

After popping an element:

```text
        Top
         |
         v
      +-----+
      | 20  |
      +-----+
      | 10  |
      +-----+
```

---

## Key Characteristics

* Follows the **LIFO** principle.
* Insertion and deletion occur at the same end called the **Top**.
* Dynamic or static implementation possible.
* Easy to implement using arrays or linked lists.
* Widely used in recursion and expression evaluation.

---

## Terminology

### Top

The topmost element of the stack.

```text
Top
 |
 v
[30]
[20]
[10]
```

---

### Push

Adds an element to the top of the stack.

```text
Before:

Top
 |
 v
[20]
[10]

Push(30)

After:

Top
 |
 v
[30]
[20]
[10]
```

---

### Pop

Removes the top element from the stack.

```text
Before:

Top
 |
 v
[30]
[20]
[10]

Pop()

After:

Top
 |
 v
[20]
[10]
```

---

### Peek (Top)

Returns the top element without removing it.

```text
Stack:
[30]
[20]
[10]

Peek() = 30
```

---

## Basic Operations

### 1. Push

Insert an element into the stack.

Example:

```text
Push(10)
Push(20)
Push(30)
```

Result:

```text
Top
 |
 v
[30]
[20]
[10]
```

**Time Complexity:** O(1)

---

### 2. Pop

Remove the top element.

Before:

```text
Top
 |
 v
[30]
[20]
[10]
```

After:

```text
Top
 |
 v
[20]
[10]
```

**Time Complexity:** O(1)

---

### 3. Peek / Top

Access the top element without removing it.

Example:

```text
Top Element = 30
```

**Time Complexity:** O(1)

---

### 4. isEmpty()

Checks whether the stack contains any elements.

Example:

```text
Stack = Empty
```

Returns:

```text
true
```

**Time Complexity:** O(1)

---

### 5. Size

Returns the number of elements present in the stack.

Example:

```text
[30]
[20]
[10]
```

Size = 3

**Time Complexity:** O(1)

---

## Stack Overflow

Occurs when an element is pushed into a full stack.

Example:

```text
Maximum Size = 3

[30]
[20]
[10]

Push(40)

Stack Overflow
```

---

## Stack Underflow

Occurs when attempting to pop from an empty stack.

Example:

```text
Empty Stack

Pop()

Stack Underflow
```

---

## Array Representation

```text
Index: 0   1   2

       10  20  30
             ^
             Top
```

---

## Linked List Representation

```text
Top
 |
 v

+------+------+
| 30   |  o---|----+
+------+------+
                |
                v
         +------+------+
         | 20   |  o---|----+
         +------+------+
                         |
                         v
                  +------+------+
                  | 10   | NULL |
                  +------+------+
```

---

## Time Complexity Analysis

| Operation | Complexity |
| --------- | ---------- |
| Push      | O(1)       |
| Pop       | O(1)       |
| Peek      | O(1)       |
| isEmpty   | O(1)       |
| Size      | O(1)       |
| Search    | O(n)       |

---

## Space Complexity

```text
O(n)
```

Where **n** is the number of elements in the stack.

---

## Advantages

* Simple and efficient implementation.
* Fast insertion and deletion.
* Useful for recursive algorithms.
* Efficient memory management in dynamic implementations.
* Provides organized data access.

---

## Disadvantages

* Limited access to elements.
* No random access like arrays.
* Stack overflow may occur in fixed-size implementations.
* Searching is inefficient.

---

## Applications

### Function Call Management

The system uses a call stack to keep track of function calls.

```text
main()
 |
 +--> functionA()
       |
       +--> functionB()
```

---

### Recursion

Every recursive call is stored on the stack.

Example:

```text
factorial(5)
factorial(4)
factorial(3)
factorial(2)
factorial(1)
```

---

### Undo Operations

Used in:

* Text Editors
* IDEs
* Drawing Applications

```text
Action1
Action2
Action3

Undo -> Action3 Removed
```

---

### Browser History

Back button functionality often uses stacks.

```text
Page1
Page2
Page3

Back -> Page2
```

---

### Expression Evaluation

Used in:

* Infix to Postfix Conversion
* Infix to Prefix Conversion
* Postfix Evaluation

---

### Parentheses Matching

Checks whether expressions contain balanced brackets.

Example:

```text
{[( )]}
```

---

### Depth First Search (DFS)

DFS internally uses a stack.

---

## Comparison: Stack vs Queue

| Feature   | Stack       | Queue         |
| --------- | ----------- | ------------- |
| Principle | LIFO        | FIFO          |
| Insertion | Top         | Rear          |
| Deletion  | Top         | Front         |
| Access    | Top Element | Front Element |
| Example   | Plate Stack | Ticket Line   |

---

## Common Interview Questions

1. What is a Stack?
2. Explain the LIFO principle.
3. What is the difference between Stack and Queue?
4. What are Stack Overflow and Stack Underflow?
5. How can a Stack be implemented using Arrays?
6. How can a Stack be implemented using Linked Lists?
7. What are the applications of Stack?
8. How is recursion related to Stack?
9. What is the time complexity of Push and Pop?
10. How do you evaluate a postfix expression using a Stack?

---

## Implementations

### Available Languages

* C
* C++
* Java
* Python

---

## Key Takeaway

A Stack is a fundamental linear data structure that follows the **Last In, First Out (LIFO)** principle. Its efficient insertion and deletion operations make it an essential tool for recursion, expression evaluation, undo functionality, browser navigation, and many advanced algorithms.
