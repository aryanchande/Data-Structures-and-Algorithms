# Queue

A Queue is a linear data structure that follows the **FIFO (First In, First Out)** principle. The element inserted first is removed first.

## Visualization

```text
Front -> [10] [20] [30] <- Rear
```

After Dequeue:

```text
Front -> [20] [30] <- Rear
```

## Operations

* Enqueue (Insert)
* Dequeue (Delete)
* Front
* Rear
* Size
* Empty Check

## Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| Enqueue   | O(1)       |
| Dequeue   | O(1)       |
| Front     | O(1)       |
| Rear      | O(1)       |
| Size      | O(1)       |

## Applications

* CPU Scheduling
* Printer Queue
* Task Scheduling
* Breadth First Search (BFS)
* Message Queues