## Task:

Write a function that returns the length of a string.

- Prototype: int _strlen(char *s);


## Pseudocode:

```ps
FUNCTION _strlen(s)
    SET length to 0
    WHILE the character pointed to by s is not null ('\0')
        Increment length by 1
        Move to the next character (increment s)
    END WHILE
    RETURN length
END FUNCTION
```