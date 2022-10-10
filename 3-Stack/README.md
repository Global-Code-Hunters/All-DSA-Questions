# Stack Data Structure

## Identification of Problems

How to identify problems to implement the stack data structure -

- Most of the question based on Array or Heap.
- In brute force O(n<sup>2</sup>) when one loop is dependent on another loop.

```py
for i in range(n):
    for j in range(i, n):
```

- Here `j` is going either `0` to `i`, `i` to `0`, `i` to `n` or `n` to `i`.
