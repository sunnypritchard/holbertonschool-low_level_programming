## Task:

Write a function that swaps the values of two integers.

- Prototype: void swap_int(int *a, int *b);

## Pseudocode:

```ps
FUNCTION swap_int(a, b)
    CREATE a temporary variable tmp
    SET tmp to the value pointed to by a
    SET the value pointed to by a to the value pointed to by b
    SET the value pointed to by b to tmp
END FUNCTION
```