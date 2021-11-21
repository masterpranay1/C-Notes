# C Language Notes
## Along with Hackerrank question practice

1. Taking Sentence as a Input

``` c
    scanf("%[^\n]%*c", &s);
```

The statement: `scanf("%[^\n]%*c", s);` will not work because the last statement willread a newline character, \n, from theprevious line. This can be handled in avariety of ways. One way is to use scan("\n"); before the last statement.

2. fixing decimal places in C

``` c
    scanf("%.2f", &deciNum);
```

3. Two Dimensional array

``` C
char *twoDArrayOfString[3] = {
    "one", "two", "three"
};
```