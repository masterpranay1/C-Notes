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

## C Data Types

There are 4 types of data types in c:-

1. Basic Types
    - Integer
    - Floats
2. Enumerated Types
3. Void
4. Deriverd
    - Pointer Types
    - Array Types
    - Structure Types
    - Union Types
    - Function Types

**Integer types** 
This can be classified in these:-
- char (1 byte)
- unsigned char (1 char)
- signed char (1 char)
- int (2 or 4 bytes)
- unsigned int (2 or 4 bytes)
- short (2 bytes)
- unsigned short(2 bytes)
- long (8 bytes  or 4 bytes for 32 bit OS)
- unsigned long (8 bytes)

We can use `sizeof()` to get exact size (int bytes) of variable.

`INT_MAX` and all other works well in c.
(But identifiers for some of them are different)

**Floating Data Types** 
- float (4 bytes)
- double (8 bytes)
- long double (10 bytes)

**Void** can also be classified in 3 ways.
1. Function return as void
2. Function argument as void
3. Pointers as void

## C - Variables

`type variable_name;` :- syntax of declaring a variable. 
`int sum;`

Expression can be of two types:-
1. lvalue
2. rvalue

ex. for `char x = 'a'` , here `char x` is lvalue and `'a'` is rvalue;
- rvalue are constants which are assigned to lavlues.
