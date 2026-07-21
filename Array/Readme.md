# Arrays

An Array is a collection of elements stored in contiguous memory locations.

In C++, the STL provides the `vector` container, which acts as a dynamic array capable of resizing automatically.

## Visualization

```text
Index:  0   1   2   3

Data : [10][20][30][40]
```

## Common Vector Operations

* push_back()
* pop_back()
* size()
* empty()
* front()
* back()
* at()
* insert()
* erase()
* swap()

## Time Complexity

| Operation   | Complexity     |
| ----------- | -------------- |
| Access      | O(1)           |
| push_back() | O(1) Amortized |
| pop_back()  | O(1)           |
| insert()    | O(n)           |
| erase()     | O(n)           |
| search      | O(n)           |

## Applications

* Dynamic Arrays
* Matrix Representation
* Graph Storage
* Competitive Programming
* Data Processing

