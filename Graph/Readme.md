# Graph

## Introduction

A **Graph** is a non-linear data structure consisting of a set of **Vertices (Nodes)** and **Edges** that connect pairs of vertices.

Graphs are used to model relationships between objects and are one of the most important data structures in computer science.

Examples:

* Social Networks
* Road Maps and Navigation Systems
* Computer Networks
* Recommendation Systems
* Web Page Linking
* Airline Route Networks

---

## Basic Terminology

### Vertex (Node)

A vertex represents an entity in a graph.

```text
A, B, C, D
```

---

### Edge

An edge represents a connection between two vertices.

```text
A ----- B
```

Edge:

```text
(A, B)
```

---

### Graph Representation

```text
      A
     / \
    /   \
   B-----C
    \
     \
      D
```

Vertices:

```text
A, B, C, D
```

Edges:

```text
(A,B)
(A,C)
(B,C)
(B,D)
```

---

## Key Characteristics

* Consists of vertices and edges.
* Can model real-world relationships.
* Supports directed and undirected connections.
* Can be weighted or unweighted.
* Can contain cycles.

---

## Types of Graphs

### 1. Undirected Graph

Edges have no direction.

```text
A ----- B
|       |
|       |
C ----- D
```

If A is connected to B, then B is also connected to A.

---

### 2. Directed Graph (Digraph)

Edges have directions.

```text
A -----> B
|
v
C
```

A connection from A to B does not imply a connection from B to A.

---

### 3. Weighted Graph

Edges contain weights (cost, distance, time, etc.).

```text
A --5-- B
|       |
2       3
|       |
C --4-- D
```

---

### 4. Unweighted Graph

All edges are considered equal.

```text
A ----- B
|
|
C
```

---

### 5. Cyclic Graph

Contains at least one cycle.

```text
A ----- B
|       |
|       |
C ----- D
```

Cycle:

```text
A → B → D → C → A
```

---

### 6. Acyclic Graph

Contains no cycles.

```text
A
|
B
|
C
|
D
```

---

### 7. Connected Graph

Every vertex can be reached from every other vertex.

```text
A ----- B
|       |
|       |
C ----- D
```

---

### 8. Disconnected Graph

Some vertices are isolated.

```text
A ----- B

C ----- D
```

---

## Graph Representations

### 1. Adjacency Matrix

A 2D matrix where:

```text
matrix[i][j] = 1
```

if an edge exists between vertices i and j.

Example:

```text
      A B C D

A     0 1 1 0
B     1 0 1 1
C     1 1 0 0
D     0 1 0 0
```

### Advantages

* Fast edge lookup.
* Easy implementation.

### Disadvantages

* Requires O(V²) memory.

---

### 2. Adjacency List

Each vertex stores a list of its neighbors.

```text
A -> B -> C

B -> A -> C -> D

C -> A -> B

D -> B
```

### Advantages

* Memory efficient.
* Preferred for sparse graphs.

### Disadvantages

* Edge lookup can be slower.

---

## Degree of a Vertex

### Undirected Graph

Number of edges connected to a vertex.

```text
      A
     / \
    B---C
```

Degree:

```text
A = 2
B = 2
C = 2
```

---

### Directed Graph

Two types:

#### In-Degree

Number of incoming edges.

#### Out-Degree

Number of outgoing edges.

```text
A -----> B
|
v
C
```

```text
A:
In-Degree = 0
Out-Degree = 2

B:
In-Degree = 1
Out-Degree = 0

C:
In-Degree = 1
Out-Degree = 0
```

---

## Graph Traversal

Traversal means visiting all vertices.

---

### Breadth First Search (BFS)

Visits vertices level by level.

Uses:

```text
Queue
```

Example:

```text
      A
     / \
    B   C
   /
  D
```

BFS Order:

```text
A B C D
```

### Time Complexity

```text
O(V + E)
```

---

### Depth First Search (DFS)

Visits as deep as possible before backtracking.

Uses:

```text
Stack or Recursion
```

Example:

```text
      A
     / \
    B   C
   /
  D
```

DFS Order:

```text
A B D C
```

### Time Complexity

```text
O(V + E)
```

---

## Common Graph Algorithms

### Traversal

* BFS
* DFS

### Shortest Path

* Dijkstra's Algorithm
* Bellman-Ford Algorithm
* Floyd-Warshall Algorithm

### Minimum Spanning Tree (MST)

* Prim's Algorithm
* Kruskal's Algorithm

### Connectivity

* Union-Find (Disjoint Set Union)

### Topological Sorting

Used in Directed Acyclic Graphs (DAGs).

---

## Time Complexity Summary

### Adjacency Matrix

| Operation   | Complexity |
| ----------- | ---------- |
| Add Edge    | O(1)       |
| Remove Edge | O(1)       |
| Check Edge  | O(1)       |
| Space       | O(V²)      |

---

### Adjacency List

| Operation   | Complexity |
| ----------- | ---------- |
| Add Edge    | O(1)       |
| Remove Edge | O(V)       |
| Check Edge  | O(Degree)  |
| Space       | O(V + E)   |

---

## Advantages

* Models real-world relationships naturally.
* Supports complex network analysis.
* Flexible and scalable.
* Foundation of many advanced algorithms.

---

## Disadvantages

* Implementation can be complex.
* Traversal algorithms may be difficult for beginners.
* Large graphs can consume significant memory.

---

## Applications

### Social Networks

```text
User A ----- User B
     |
     |
User C
```

Examples:

* Facebook
* LinkedIn
* Instagram

---

### Navigation Systems

```text
City A ----- City B
   |
   |
City C
```

Used in:

* Google Maps
* GPS Systems

---

### Computer Networks

```text
Computer A ----- Router ----- Computer B
```

---

### Recommendation Systems

```text
User -> Movie
User -> Product
```

Used by:

* Netflix
* Amazon
* YouTube

---

### Web Crawling

```text
Page A -> Page B
Page A -> Page C
```

Used by search engines.

---

### Dependency Management

```text
Task A -> Task B -> Task C
```

Used in:

* Build Systems
* Package Managers
* Project Scheduling

---

## Comparison: Tree vs Graph

| Feature               | Tree        | Graph               |
| --------------------- | ----------- | ------------------- |
| Root Node             | Yes         | Not Required        |
| Cycles                | Not Allowed | Allowed             |
| Connectivity          | Connected   | May be Disconnected |
| Edges                 | V - 1       | Any Number          |
| Parent-Child Relation | Yes         | Not Necessary       |

---

## Common Interview Questions

1. What is a Graph?
2. What are vertices and edges?
3. Difference between directed and undirected graphs?
4. What is a weighted graph?
5. What is an adjacency matrix?
6. What is an adjacency list?
7. Difference between BFS and DFS?
8. What is a cycle in a graph?
9. What is a connected graph?
10. What is a Minimum Spanning Tree?
11. What is Topological Sorting?
12. When should you use an adjacency list over an adjacency matrix?

---

## Key Takeaway

A Graph is a powerful non-linear data structure used to represent relationships between entities. It consists of vertices and edges and serves as the foundation for many real-world systems such as social networks, navigation systems, recommendation engines, and computer networks. Understanding graph representations and traversal algorithms like BFS and DFS is essential for mastering advanced Data Structures and Algorithms.
