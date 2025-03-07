## Task:

Write a function that prints a string, in reverse, followed by a new line.

- Prototype: void print_rev(char *s);


## Pseudocode:

```ps
FUNCTION print_rev(s):
    SET i to 0
    WHILE s[i] is not equal to null terminator:
        Increment i by 1
    WHILE i is greater than or equal to 0:
        Print the character s[i]
        Decrement i by 1
    PRINT newline
END FUNCTION
```