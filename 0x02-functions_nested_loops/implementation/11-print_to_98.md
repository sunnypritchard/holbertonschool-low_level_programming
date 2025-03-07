## Task:

Write a function that prints all natural numbers from n to 98, followed by a new line.

- Prototype: void print_to_98(int n);
- Numbers must be separated by a comma, followed by a space
- Numbers should be printed in order
- The first printed number should be the number passed to your function
- The last printed number should be 98 You are allowed to use the standard library


## Implementation:

I'm asked to create a function that prints numbers from a given integer `n` to `98`, either counting up or down.

With this in mind, to implements the function `print_to_98`, my fuction will have to meet the following requirements:

1. **Function** `print_to_98(n)`: The function take an integer `n` as an 
parameters (input).


```c
void print_to_98(int n)
```


2. **Check if `n` is less than or equal to 98**: If it is, iterate from `n` up to 98 and print each number followed by a comma (except the last one, which is 98).



```c
int i;

if (n <= 98)
{
        for (i = n; i <= 98; i++)
        {
                printf("%d", i);
                if (i != 98)
                {
                        printf(", ");
                }
        }
}
```


3. **Check if `n` is greater than or equal to 98**: If it is, iterate from `n` down to 98 and print each number similarly.



```c
else
{
        for (i = n; i >= 98; i++)
        {
                printf("%d", i);
                if (i != 98)
                {
                        printf(", ");
                }
        }
}
```


4. **Print a new line**: After the loop, print a new line to format te output cleanly.


```c
printf("\n");
```


## Pseudocode:

```ps
Function print_to_98(n):
    If n is less than or equal to 98:
        For each number i from n to 98 (inclusive):
            Print i
            If i is not 98:
                Print ", "
    Else:
        For each number i from n down to 98 (inclusive):
            Print i
            If i is not 98:
                Print ", "
    Print a new line
```


