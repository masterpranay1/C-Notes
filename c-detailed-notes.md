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

## C Basic syntax

**Tokens** :- A C program consists of many types of tokens.
1. Keywords
- These are the reserved keywords in c.
- These cant be used as variables or constants
- There are 33 reserved keywords.
2. Identifier
- A name to identify a vaiable, function or any user defined item.
- It starts with a alphabet or underscore and followed by zero or more alphabet or underscore.
- Punctuation characters are not allowed.
3. Constants
4. String Literal
5. Symbol