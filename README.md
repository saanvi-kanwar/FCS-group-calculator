# FCS Group Calculator

## Project Overview
This project is a menu-driven calculator developed using the C programming language as part of the Fundamentals of Computer Science (FCS) subject.

The calculator performs basic arithmetic operations and includes input validation and error handling.

## Features
- Addition
- Subtraction
- Multiplication
- Division
- Modulus
- Invalid input handling
- Division-by-zero prevention
- Modulus-by-zero prevention

## Project Structure

| File | Description |
|---|---|
| `main.c` | Main program and menu |
| `operations.c` | Arithmetic operation functions |
| `operations.h` | Function declarations |
| `input.c` | Integer input validation |
| `input.h` | Input function declaration |
| `test-cases.md` | Program testing details |
| `.gitignore` | Ignores compiled executable files |

## Technologies Used
- C Programming Language
- Visual Studio Code
- Git
- GitHub

## How to Run

Compile the program:

```bash
gcc main.c operations.c input.c -o calculator
```

Run on Windows:

```bash
.\calculator.exe
```

## Learning Outcomes
- Understanding functions in C
- Working with multiple source and header files
- Understanding modular programming
- Using Git and GitHub for version control
- Performing basic input validation and error handling