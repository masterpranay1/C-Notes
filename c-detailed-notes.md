# C Notes
This are notes I had taken from tuturialpoint along with learning C language .

## C - Program Structure

A C program basically consists of :-
- Preprocessor commands
- Functions
- Variables
- Statements / Expression
- Comments

### A simple `Hello World` Program
``` c
    #include<stdio.h>
    int main() {
        /* comment */
        printf("Hello World\n");
        return 0;
    }
```

- Here `stdio.h` is the header file.
- `/* ... */` is multiline comment.
- `printf` is the function to output any content or variables on the screen.

### Here we are using `gcc` as our compiler