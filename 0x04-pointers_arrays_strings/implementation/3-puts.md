## Task:

Write a function that prints a string, followed by a new line, to stdout.

- Prototype: void _puts(char *str);


## Pseudocode:

```ps
Function _puts(str):
    While str is not pointing to the null character:
        Call _putchar with the character pointed to by str
        Increment str to the next character
    Call _putchar with the newline character
    Return
```


