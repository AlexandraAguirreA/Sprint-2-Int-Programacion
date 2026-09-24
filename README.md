# Introduction to Programming: Algorithms in C++

This repository contains practice exercises for an Introduction to Programming class. The programs are written in C++ and focus on building basic algorithms with sequential instructions, conditional statements, and repetition structures.

## Repository Description

Beginner C++ exercises for practicing fundamental programming logic and algorithm design, including sequential algorithms, `if`/`else` statements, `switch` statements, and `while` loops.

## Contents

### `secuencial/`

Sequential algorithms, where instructions are executed in order. The exercise calculates an estimated maximum heart rate and a training range based on a person's age.

### `selectivas/`

Selective algorithms that make decisions based on input. These exercises practice:

- Validating password length
- Comparing a cost with a budget
- Classifying a body mass index
- Checking a password
- Selecting a product tax rate with `switch`
- Determining a closing time based on a day number

### `repetitivas/`

Repetitive algorithms that execute instructions multiple times. The latest commit adds the remaining exercises in this folder:

- `repet1.cpp`: Finding the largest number in a series
- `repet2.cpp`: Summing a fractional series with a `while` loop
- `repet3.cpp`: Accumulating a total until the value `0` is entered with `do...while`
- `repet4.cpp`: Counting negative numbers in a sequence until a sentinel is reached
- `repet5.cpp`: Calculating the average of random numbers generated with `for`
- `repet6.cpp`: Computing the mean and variance of a set of values

## Technologies

- C++
- Standard library input and output with `iostream`
- Basic control structures: sequential flow, `if`/`else`, `switch`, and `while`

## Compiling and Running

Make sure a C++ compiler such as `g++` is installed. From the repository root, compile an exercise and run the resulting program with:

```bash
g++ secuencial/secuencial.cpp -o secuencial/secuencial
./secuencial/secuencial
```

For example, to compile a selection exercise:

```bash
g++ selectivas/selec3.cpp -o selectivas/selec3
./selectivas/selec3
```

The compiled programs in the `output/` folders are executable files generated from some of the exercises. The `.cpp` files are the source code used for learning and development.

## Learning Goals

- Translate everyday problems into simple algorithms
- Read input and display calculated results
- Use variables and basic data types
- Apply conditions and repetition structures
- Practice compiling and executing C++ programs

## Author

Alexandra Aguirre A.