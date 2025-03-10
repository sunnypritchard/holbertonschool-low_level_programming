## Task:

Write a function that prints a string in reverse.

- prototype: void _print_rev_recursion(char *s);


## Pseudocode:

```
Function _print_rev_recursion(s):
    If s points to the null character ('\0'):
        Return (exit the function)
    
    Call _print_rev_recursion with the next character in the string (s + 1)
    
    Print the character at the current position (s)
```