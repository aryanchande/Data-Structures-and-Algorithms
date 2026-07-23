# Strings

## Introduction

A **String** is a sequence of characters used to represent text. Strings are one of the most commonly used data types in programming and are essential for handling user input, text processing, file operations, and data manipulation.

Different programming languages provide different ways to work with strings:

* **C**: Strings are character arrays terminated by the null character (`'\0'`).
* **C++**: Strings can be handled using both character arrays and the STL `string` class.
* **Java**: Strings are objects of the `String` class.
* **Python**: Strings are immutable sequences of Unicode characters.

## Visualization

Example String:

```text
String: "HELLO"

Index:   0   1   2   3   4
          H   E   L   L   O
```

In C, the actual memory representation is:

```text
Index:   0   1   2   3   4   5
          H   E   L   L   O  \0
```

## Key Characteristics

* Stores a sequence of characters.
* Supports indexing and traversal.
* Can be mutable or immutable depending on the language.
* Widely used for text processing and data storage.
* Supports various operations such as concatenation, searching, and substring extraction.

## Common Operations

| Operation       | Description                          |
| --------------- | ------------------------------------ |
| Traversal       | Access each character                |
| Length          | Find number of characters            |
| Concatenation   | Join two strings                     |
| Comparison      | Compare two strings                  |
| Copy            | Duplicate a string                   |
| Search          | Find a character or substring        |
| Substring       | Extract part of a string             |
| Reverse         | Reverse the string                   |
| Case Conversion | Convert between upper and lower case |

## Time Complexity

| Operation        | Complexity |
| ---------------- | ---------- |
| Access Character | O(1)       |
| Traversal        | O(n)       |
| Search           | O(n)       |
| Concatenation    | O(n + m)   |
| Comparison       | O(n)       |
| Copy             | O(n)       |
| Reverse          | O(n)       |

Where:

* `n` = length of first string
* `m` = length of second string

## String Representation in Different Languages

### C

```c
char str[] = "Hello";
```

### C++

```cpp
string str = "Hello";
```

### Java

```java
String str = "Hello";
```

### Python

```python
str = "Hello"
```

## Advantages

* Easy storage and manipulation of textual data.
* Essential for user interfaces and communication systems.
* Supported by extensive built-in libraries.
* Useful in searching, parsing, and formatting data.

## Disadvantages

* String operations may require additional memory.
* Large-scale text processing can be computationally expensive.
* Improper handling in languages like C may lead to buffer overflows.

## Real-World Applications

* Search Engines
* Text Editors
* Chat Applications
* Password Validation
* Data Parsing
* File Processing
* Natural Language Processing (NLP)
* Web Development

## Common String Algorithms

* Pattern Matching
* String Reversal
* Palindrome Checking
* Anagram Detection
* Longest Common Prefix
* Rabin-Karp Algorithm
* Knuth-Morris-Pratt (KMP)
* Z Algorithm

## Interview Questions

1. What is the difference between a character array and a string?
2. How are strings represented internally in C?
3. What is the purpose of the null character (`'\0'`)?
4. How do mutable and immutable strings differ?
5. How can you reverse a string efficiently?
6. What is a palindrome?
7. Explain string concatenation.
8. What are common string searching algorithms?
9. How is memory allocated for strings?
10. What are the advantages of using the C++ STL `string` class over character arrays?

## Implementations

* C
* C++
* Java
* Python
* JavaScript

## Further Reading

* String Manipulation Techniques
* Pattern Matching Algorithms
* Text Processing and Parsing
* String Optimization in Competitive Programming
* Unicode and Character Encoding
