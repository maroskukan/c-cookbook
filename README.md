# C Cookbook

- [C Cookbook](#c-cookbook)
  - [Introduction](#introduction)
    - [Programming Process](#programming-process)
    - [Source code](#source-code)
    - [Object Code](#object-code)
    - [Linker](#linker)
    - [Programming Cycle](#programming-cycle)
  - [Tips](#tips)
    - [Undefined reference to](#undefined-reference-to)

## Introduction

- The C language was introduced in the early 1970s by Dennis Ritchie at Bell Labs.
- It remains a cornerstone of modern programming due to its simplicity, portability, and powerful features.
- It quickly gained popularity and became the foundation for many other programming languages.
- Its enduring relevance is attributed to its efficiency, versatility, and ability to interface directly with hardware.
- C is widely used in various applications, including system programming, embedded systems, operating systems, and high-performance applications.

### Programming Process

1. Source code
2. Compiler
3. Object code
4. Linker
5. Create program
6. Test program

### Source code

- Plain text file
- Follows programming language rules (syntax, formatting)
- Ends with with `.c` filename extension
- Contains programming instructions

### Object Code

- Compiled from source code file `.c`
- The C language compiler is c compiler `cc`
- Contains tokenized instructions
- Ends with the `.o` filename extensions

### Linker

- Often done as part of compiling
- Combines object code and C library file
- Creates a binary, executable file

### Programming Cycle

1. Edit (ed, vi, emacs)
2. Compile (cc, gcc, clang)
3. Link (ld)
4. Test

## Tips

### Undefined reference to

In order to resolve linker error `undefined reference to` followed by a function name (`pow`, `sqrt`) you need to add the `-lm` argument to the GCC build command.

```bash
gcc 02-20_exercise.c -o 02-20_exercise -lm
```