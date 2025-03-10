## Task:

Write a function that prints a string, followed by a new line.

- Prototype: void _puts_recursion(char *s);

## Pseudocode:

```
FUNCTION _puts_recursion(s)
    IF the character at s is the null terminator ('\0')
        Print a newline
    ELSE
        Print the character at s
        Call _puts_recursion with the next character (increment the pointer s)
End FUNCTION
```